#include<stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("abc","w");
    if (fp==NULL)
    {
        printf("\n unable to open file");
        

    }
    while(1)
    {
        
        if(ch==13)
        break;
      
        
    }
    fclose(fp);
    

}