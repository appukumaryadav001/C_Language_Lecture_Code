#include<stdio.h>
void swapping();
int main(){
    int a=11,b=21;
    printf("Before swapping value inside main\na=%d\tb=%d\n",a,b);
    swapping(&a,&b);
    printf("After swapping value insde main\na=%d\tb=%d\n",a,b);
    return 0;
}
void swapping(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("After swapping value inside function\na=%d\tb=%d\n",*x,*y);


}