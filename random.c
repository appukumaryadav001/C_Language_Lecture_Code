#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int num;
  srand(time(NULL));
  num=rand()%6+1;
  printf("The num = %d",num);
  return 0;

}