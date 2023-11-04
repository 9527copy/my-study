#include <stdio.h>
#include <stdlib.h>
//判断一个数是否是质数
int main()
{
  int num, i; //也可以加一个flag来判断命题状态flag==0；flag==1；

  printf("请输入一个大于2的整数：");
  scanf("%d", &num);

  for (i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      printf("该数不是一个质数！\n");
      break; // break提前退出这一层for循环
    }
  }
  if (i == num) //循环进行了多少次
  {
    printf("该数是一个质数！\n");
  }

  system("pause");
  return 0;
}