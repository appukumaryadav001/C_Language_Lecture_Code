#include <Stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the a number\n");
    scanf("%d", &a);
    printf("Enter the b number\n");
    scanf("%d", &b);
    printf("Before number is a = %d\n", a);
    printf("Before number is b = %d\n", b);
    c = a;
    a = b;
    b = c;
    printf("After number is a = %d\n", a);
    printf("After number is b = %d\n", b);

    return 0;
}