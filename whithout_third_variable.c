#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter b number\n");
    scanf("%d", &b);
    printf("Before swaping number a = %d\n", a);
    printf("Before swaping number b = %d\n", b);
    a=b+a;
    b=a-b;
    a=a-b;
printf("After swaping number a = %d\n",a);
printf("After swaping number b = %d\n",b);
return 0;

}