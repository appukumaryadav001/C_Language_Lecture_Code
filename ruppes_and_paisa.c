#include <stdio.h>
int main()
{
    int r,p;
    float a;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    r=a;
    printf("total ruppise = %d\n",r);

    p=(a-r)*100;
    printf("total paisa =%d\n",p);
    return 0;

}