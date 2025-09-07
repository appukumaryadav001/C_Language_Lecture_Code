#include <stdio.h>
int main()
{
    int a, b, sub;
    printf("Enter two number sub\n");
    scanf("%d %d", &a, &b);
    sub = a+ ~b+1;
    printf("The sub value is = %d\n",sub);
    return 0;
}