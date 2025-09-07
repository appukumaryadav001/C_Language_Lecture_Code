#include <stdio.h>
void main()
{
    struct stud
    {
        char name[10];
        int roll;
    };

    struct stud a1 = {"appu", 001};
    struct stud *a2;
    a2 = &a1;

    printf("Name = %s\n roll = %d\n", a1.name, a1.roll);

    printf("Name = %s\n roll = %d", a2->name, a2->roll);
}