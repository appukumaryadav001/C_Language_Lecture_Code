#include<stdio.h>
int main()
{
    int table;
    printf("ENTer the tablr\n");
    scanf("%d",&table);
    for(int i=1; i<11; i++)
    {

        printf("The table is %d %d %d\n",table,i,table*i);
    }
    return 0;
}