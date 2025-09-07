// write a program to calculate perimeter of rectangle take side a & b from the user 
/*
{
    float a,b,perm;
    printf("Enter perametre a\n");
    scanf("%f",&a);
    printf("Enter perametre b\n");
    scanf("%f",&b);

    perm = 2*(a+b);


    printf("permeter = %f\n",perm);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int n,cube;
    printf("Enter the n number\n");
    scanf("%d",&n);
    cube=(n*n*n);
    printf("Cube = %d",cube);
    return 0;
}