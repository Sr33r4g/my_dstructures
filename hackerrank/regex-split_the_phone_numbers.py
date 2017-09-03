

# https://www.hackerrank.com/challenges/split-number

import re;

n = int(input());

regex = re.compile("^((([0-9]{1,3})[ -])(([0-9]{1,3})[ -])([0-9]{4,10}))$");

while(n > 0):
    n -= 1;
    ip = input();
    m = regex.match(ip);
    # print("CountryCode="+m.group(3)+",LocalAreaCode="+m.group(5)+",Number="+m.group(6));
    print("CountryCode=%s,LocalAreaCode=%s,Number=%s" %(m.group(3),m.group(5),m.group(6)));




# ((([0-9]{1,3})(-| ))|(([0-9]{1,3})(-| ))|([0-9]{4,10}))               #Wrong
# (([0-9]{1,3})[-| ]([0-9]{1,3})[-| ]([0-9]{4,10}))             # a much more smaller solution