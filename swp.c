#include <stdio.h>
int main()
{
    long i,k;
    printf("Enter the integer\n");
    scanf("%ld %ld",&i,&k);
    printf("Before swaping \ni=%ld\nk=%ld",i,k);
    i=i^k;
    k=i^k;
    i=i^k;
    printf("\nAfter swaping \ni=%ld\nk=%ld",i,k);

    return 0;

}