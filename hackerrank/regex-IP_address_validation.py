https://www.hackerrank.com/challenges/ip-address-validation/problem

import re

n = int(input());


while(n > 0):
	ip = input();
	n -= 1;
	ipv4 = re.compile("^((1?[0-9]{1,2}\.)|(2[0-4][0-9]\.)|(25[0-5]\.)){3}((1?[0-9]{2})|(2[0-4][0-9])|(25[0-5]))$");
	ipv6 = re.compile("^(([0-9a-f]{1,4}:){7}[0-9a-f]{1,4})$");


	if(ipv4.match(ip) != None):
    		print("IPv4");
	elif(ipv6.match(ip) != None):
    		print("IPv6");
	else:
    		print("Neither");






# <(.*)\s(.*)="(.*)">					...The answer


#    ((1?[0-9]{2}\.)|(2[0-4][0-9]\.)|(25[0-5]\.)){3}((1?[0-9]{2})|(2[0-4][0-9])|(25[0-5]))                       ... IPV4
#    (([0-9a-f]{1,4}:){7}[0-9a-f]{1,4})                       ... IPV6


