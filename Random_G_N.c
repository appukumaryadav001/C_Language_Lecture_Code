#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int grn(int n)
{
    srand(time(NULL));
    return rand()%n+1;

}
int main()
{
    printf("Generaye number between 1 to 6: %d\n",grn(6));
    return 0;
}