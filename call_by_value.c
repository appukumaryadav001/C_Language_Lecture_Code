#include <stdio.h>
void change(int num)
{
    printf("Before adding value inside function num=%d\n",num);
    num=num+100;
    printf("After adding value inside function num=%d\n",num);

}
int main(){
    int a=50;
    printf("Before function call a=%d\n",a);
    change(a);
    printf("After function call a=%d\n",a);
    return 0;

}