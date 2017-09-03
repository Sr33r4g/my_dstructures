
# https://www.hackerrank.com/challenges/alien-username

import re


n = int(input());

# n = int(1);

regex = re.compile("^([\._][0-9]+[A-Za-z]*_?)$");

while(n > 0):
	n -= 1;
	ip = input();
	if(regex.match(ip) != None):
    		print("VALID");	
	else:
    		print("INVALID");

