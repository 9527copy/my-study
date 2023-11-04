//1~100中去掉5的倍数的数累加
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,sum;
  for(i=1;i<=100;i++)
  {
    if(i%5==0)
    {
      continue;//结束这一次循环，进入下一轮判断
    }
    sum+=i;
  }

  printf("%d",sum);

  system("pause");
  return 0;
}
