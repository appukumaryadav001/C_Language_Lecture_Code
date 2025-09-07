#include <stdio.h>

int main()
{
 int a,b,c;
 
 printf("Enter the number of a:\n");
 scanf("%d",&a);
 printf("Enter the number of b:\n");
 scanf("%d",&b);
 printf("Enter the number of c:\n");
 scanf("%d",&c);
 if(a>b){
    if(a>c){
        printf("Grather than a\n");
    }
    else{
        printf("Grater than c");                                                  
    }
 }
 else{
    printf("Grather than b\n");
 }

    return 0;
}