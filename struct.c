#include <stdio.h>
/*

int main()
{
  struct student
    {
        char name[10];
        int roll;
        int marks;
    };

   struct student s[4];
  for(int i=0;i<4;i++)
  {
    printf("Entet student info \n");
    scanf("\n%s %d %d",s[i].name,&s[i].roll,&s[i].marks);

  }

   for(int i=0;i<4;i++)
   {
    printf("Name=%s\tROll=%d\tMarks=%d\n",s[i].name,s[i].roll,s[i].marks);

   }
   return 0;
}*/

/*int main()
{
  struct library
  {
    char lang [10];
    int pages;
    char name [10];

  };
  struct library lib[3];
  int i;
  for(i=0; i<3; i++)
  {
    printf("\n Enter language pages and name\n");
    scanf("%s %d %s",&lib[i].lang,&lib[i].pages,&lib[i].name);

  }
  for(i=0; i<3; i++)
{
  printf("\nLanguage=%s\n pages=%d\n name=%s\n",lib[i].lang,lib[i].pages,lib[i].name);

}
return 0;

}
*/
#include <string.h>

struct member
{
  char name[20];
  int age;
  float mem_no;
} m1, m2, m3;

int main()
{
  struct member m1 = {"appu", 18, 55};
  strcpy(m2.name, m1.name);
  m2.age = m1.age;
  m2.mem_no = m1.mem_no;
  m3 = m2;
  printf("\n M1\n");
  printf("name=%s \t age=%d \t member no =%f\n", m1.name, m1.age, m1.mem_no);
  printf("\n M2\n");
  printf("name=%s \t age=%d \t member no =%f\n", m2.name, m2.age, m2.mem_no);
  printf("\n M3\n");
  printf("name=%s \t age=%d \t member no =%f\n", m3.name, m3.age, m3.mem_no);
  return 0;
}