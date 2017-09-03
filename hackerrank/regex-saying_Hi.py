# https://www.hackerrank.com/challenges/saying-hi

import re;

n = int(input());

regex = re.compile("^([Hh][iI]\s[^dD].*)$");

while(n > 0):
    n -= 1;
    ip = input();
    if(regex.match(ip) != None):
        print(ip);