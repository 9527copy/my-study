#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num,mun=0;

  printf("Enter a number: ");
  scanf("%d",&num);
  if(num<0)
  {
    num=-1*num;
  }

  do
  {
    mun=mun*10+num%10;
    num=num/10;
  } while (num!=0);

  printf("%d",mun);
  system("pause");
  return 0;
  

}