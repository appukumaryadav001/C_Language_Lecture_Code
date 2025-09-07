#include<stdio.h>
int fib(int n);
int main()
{
printf("%d\n",fib(7));
}
int fib(int n){
    if((n==0)||(n==1))
    {
      if (n==1)
      {
        return 1;
      }
      return 0;
    }
    int fib1=fib(n-1);
    int fib2=fib(n-2);
    int fibN=fib1+fib2;
    return fibN;


}