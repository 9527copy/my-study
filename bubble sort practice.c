#include<stdio.h>
#include<stdlib.h>
//实现将4，2，8，0，5，7，1，3，9升序排列
//学习一些排序思想，理解所学的基础语法
int main()
{
  int array[9]={4,2,8,0,5,7,1,3,9};
  printf("before: ");

  for(int i=0;i<9;i++)
  {
    printf("%d ",array[i]);
  }

  printf("\n");

  for(int i=0;i<9-1;i++)
  {
    for(int j=0;j<9-1-i;j++)
    {
      if(array[j]>array[j+1])
      {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }

  printf("before: ");

  for(int i=0;i<9;i++)
  {
    printf("%d ",array[i]);
  }

  system("pause");
  return 0;
}