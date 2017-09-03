

import re

n = int(input());

regex = re.compile("^[A-Z]{5}[0-9]{4}[A-Z]$");

while(n > 0):
    n -= 1;
    ip = input();

    if(regex.match(ip) != None):
        print("YES");
    else:
        print("NO");


