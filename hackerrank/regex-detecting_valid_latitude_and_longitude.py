
import re

n = int(input());

regex = re.compile("^\(([+-]?[0-8]?[0-9](\.[0-9]+)?|[+-]?90(\.0+)?), ([+-]?1[0-7][0-9](\.[0-9]+)?|[+-]?180(\.0+)?|[+-]?[0-9]?[0-9](\.[0-9]+)?)\)$");

while(n > 0):
    n -= 1;
    ip = input();

    if(regex.match(ip) != None):
        print("Valid");
    else:
        print("Invalid");