//0~1000输出能被3整除且数字中有5的数字
#include<stdio.h>
#include<stdlib.h>

int mian()
{
  int i,num,count;

  for(i=0;i<1000;i++)
  {
    if(i%3==0)
    {
      num=i;
      while(num>0)
      {
        num/=10;
      }
    }
  }

  system("pause");
  return 0;
}