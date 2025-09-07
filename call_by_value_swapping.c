#include <stdio.h>
void swap(int,int);
int main(){
    int a=15;
    int b=42;
    printf("Befoe swaping value in main \na=%d\n b=%d\n",a,b);
    swap(a,b);
    printf("After swaping value in main \na=%d\n b=%d\n",a,b);
    return 0;

}
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the valu in function \na=%d\n b=%d\n",a,b);


}