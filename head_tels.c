#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rgn(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main(){
   printf("The gnr=%d",rgn(5));   
    return 0;

}