
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int lar,sec;

lar = (a >= b) ? a : b;
sec = (a >= b) ? b : a;

sec = (c > lar) ? lar : ((c > sec) ? c : sec);
lar = (c > lar) ? c : lar;

sec = (d > lar) ? lar : ((d > sec) ? d : sec);
lar = (d > lar) ? d : lar;

printf("%d", sec);












    return 0;
}
