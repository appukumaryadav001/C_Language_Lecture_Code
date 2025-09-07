#include<stdio.h>
void change(int *num){
    printf("Before ading value inside function \n num=%d\n",*num);
    *num+=100;
    printf("After adding value inside function\n num=%d\n",*num);

}
int main(){
    int x=100;
    printf("Before function call \n x=%d\n",x);
    change(&x);
    printf("After function call \n x =%d\n",x);
    return 0;
    

}