#include<stdio.h>
int swap(int a,int b);
int main()
{
 int x=5;
 int y=4;
swap(x,y);
return 0;
}
int swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d\n %d\n",a,b);
    return 0;
}