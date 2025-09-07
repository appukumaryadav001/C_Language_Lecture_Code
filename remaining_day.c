#include <stdio.h>
int main()
{
    int n,m,d;
    printf("Entear the value of n :\n");
    scanf("%d",&n);


    m=n/30;
    printf("month=%d\n",m);
     d=n%30;
     printf("remaining day = %d\n",d);
     return 0;
}