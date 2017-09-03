

import re;

n = int(input());

regex = re.compile("^((.*)\s(C|CPP|JAVA|PYTHON|PERL|PHP|RUBY|CSHARP|HASKELL|CLOJURE|BASH|SCALA|ERLANG|CLISP|LUA|BRAINFUCK|JAVASCRIPT|GO|D|OCAML|R|PASCAL|SBCL|DART|GROOVY|OBJECTIVEC))$");

while(n > 0):
    n -= 1;
    ip = input();
    if(regex.match(ip) != None):
        print("VALID");
    else:
        print("INVALID");