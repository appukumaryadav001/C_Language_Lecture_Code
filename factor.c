#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter number of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       if(n % i==0){
        printf("Factor is = %d\n",i);
       }
    }
    return 0;
}