
import re;

n = int(input());

regex = re.compile("^[a-z]{0,3}[0-9]{2,8}[A-Z]{3,}$");

while(n > 0):
    n -= 1;
    i = input();
    if(regex.match(i) != None):
        print("VALID");
    else:
        print("INVALID");