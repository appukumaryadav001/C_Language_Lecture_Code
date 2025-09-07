#include <stdio.h>

void main()
{
    struct stud
    {
        char name[20];
        int age;

    };
    struct parent_name
    {
        char fath_name [20];
        char moth_name [20];
        struct stud a1;
    };

    struct parent_name s1 = {"sipahi singh","panpati devi","appu kumar",18};
    printf("Father Name = %s\n Mother Name = %s\n student Name =%s\n Age = %d",s1.fath_name,s1.moth_name,s1.a1.name,s1.a1.age);
    
}