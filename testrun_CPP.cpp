#include <cstdio>

long long f(long long a) {
     long long res[] = {a,1,a+1,0};
     return res[a%4];
}

int main() {
    printf("%d\n", f(9));
}