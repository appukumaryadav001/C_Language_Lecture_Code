#include <stdio.h>
/*int main() {
    int num=50;
    int *p;
    p=&num;
    printf("adress of p variableis = %x\n",p);
      printf("value of p variableis = %d\n",*p);
      return 0;


}
*/
int main()
{
    int a=10,b=20,*p1=&a,*p2=&b;
    printf("Before swaping value:\n*p1=%d\n *p2=%d\n",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
     *p1=*p1-*p2;
     printf("After swaping value:\n*p1=%d\n *p2=%d\n",*p1,*p2);
     return 0;

}