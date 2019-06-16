
#include <stdio.h>
int main()
{
    int N,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
    scanf("%d",&N);
    b = N/1000;
    c = N%1000;
    d = c/500;
    e = c%500;
    f = e/100;
    g = e%100;
    h = g/50;
    i = g%50;
    j = i/20;
    k = i%20;
    l = k/10;
    m = k%10;
    n = m/5;
    o = m%5;
    p = o/2;
    q = o%2;
    r = q/1;

    printf("%d\n%d note(s) tk 1000\n%d note(s) TK 500\n%d note(s) TK 100\n%d note(s) TK 50\n%d note(s) TK 20\n%d note(s) TK 10\n%d note(s) TK 5\n%d note(s) TK 2\n%d note(s) TK 1\n",N,b,d,f,h,j,l,n,p,r);
    printf("%d",i);
    return 0;
}
