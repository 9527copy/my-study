#include<stdio.h>
#include<stdlib.h>
//利用函数实现冒泡排序，让程序更有层次感
//冒泡排序：确定一个数组：数组首地址和数组长度
void BubbleSort(int*array,int len)
{
  for(int i=0;i<len-1;i++)
  {
    for(int j=0;j<len-1-i;j++)
    {
      if(array[j]>array[j+1])
      {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }

}
 
int main()
{
  int array[]={4,2,8,0,5,7,1,3,9};

  printf("befor: ");

  for(int i=0;i<9;i++)
  {
    printf("%d ",array[i]);
  }

  printf("\n");

  int*arrayp=array;//指针变量存数组的地址的原理：首数组地址和数组长度

  int lenarray=sizeof(array)/sizeof(array[0]);

  BubbleSort(arrayp,lenarray);

  printf("after: ");

  for(int i=0;i<9;i++)
  {
    printf("%d ",array[i]);
  }

  system("pause");
  return 0;
}