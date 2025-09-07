#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guss,nguss=1;
    srand(time(NULL));
    number=rand()%50+1;
    do{
        printf("guss the 1 to 50 natiural number\n");
        scanf("%d",&guss);
        if(guss<number)
        {
            printf("Please guss higher number\n");

        }
     else if (guss>number){
        printf("Plese gusss  the lower number\n");

     }
     else{printf("Yoyu guss the %d right number \n",nguss);
     }
     nguss++;
    }while(guss!=number);
    return 0;
}