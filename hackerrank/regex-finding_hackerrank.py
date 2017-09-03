
import re;

n = int(input());

regex = re.compile("^(.*hackerrank)|(hackerrank.*)|(.*hackerrank.*)$");

while(n > 0):
    n -= 1;
    ip = input();
    m = regex.match(ip);
    # print("CountryCode="+m.group(3)+",LocalAreaCode="+m.group(5)+",Number="+m.group(6));
    print("1 :",m.group(1));
    print("2 :",m.group(2));
    print("3 :",m.group(3));
    print("ENDING ONE ITERATION");







# ^(.*hackerrank)|(hackerrank.*)|(.*hackerrank.*)$