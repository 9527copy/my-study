#include<stdio.h>
#include<stdlib.h>
//插入排序
//先选一个数a，形成一个没有a的序列
//再用a和序列中的数从后往前比较
//最后将a放在一个比a小的数后面
//重复这样的循环
void InsertSort(int*arr,int n)
{
   for(int i=0;i<n-1;i++)
   {
    int end=i;//记录轮数，序列中的in的前一个数，找到轮数与循环次数的关系

    int tem=arr[end+1];//要插入序列的数in存放在tem（in为要插入序列的数）
//从某一小段程序出发，看到全程序的进行*
    while(end>=0)
    {
      if(tem<arr[end])//in比记录数要小，就将后面的数赋值给前面的数*
      {
        arr[end+1]=arr[end];
        end--;//并且循环i次
      }
      else//如果in比记录的数要大，就退出这次条件判断还原in，且进行i次的break*
      {
        break;
      }
    }
    arr[end+1] = tem;
   }
  
}

int main()
{
  int array[] = {2,4,8,0,5,7,1,3,9};
  int len = sizeof(array) / sizeof(array[0]);

  printf("before: ");

  for(int i=0;i<len;i++)
  {
    printf("%d ",array[i]);
  }

  InsertSort(array,len);

  printf("\n");

  printf("after: ");

  for(int i=0;i<len;i++)
  {
    printf("%d ",array[i]);
  }

  system("pause");
  return 0;
}