#include<stdio.h>
#include<stdlib.h>
//先选中文件路径:cd 文件路径
//没有正确的识别和链接头文件
//添加编译命令行选项-std=c11，以便正确的识别c11标准
//gcc -std=c11 shellsort.c -o shellsort./shellsort
//（output读的操作 input写的操作）
//将文件变成可编译（读）的文件
//gcc shellsort.c -o shellsort
void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  printf("\n");
}

void shellsort(int arr[],int n)
{
  int i,j,inc;

  //希尔排序进行轮数
  for(inc=n/2;inc>0;inc/=2)
  {
      //每轮希尔排序的趟数，例如有9个数增量inc为4时的趟数为5且i的值分别为4，5，6，7，8
      for(i=inc;i<n;i++)
      {
          int key=arr[i];
          //每趟的判断是否换位
          for(j=i;j>=inc&&arr[j-inc]>key;j-=inc)
          {
              arr[j]=arr[j-inc];
          }

          arr[j]=key;
      }
  }
}

int main()
{ 
  int arr[]={2,4,8,0,5,7,1,3,9};
  int len=sizeof(arr)/sizeof(arr[0]);

  printf("befor: ");
  print(arr,len);

  shellsort(arr,len);

  printf("after: ");
  print(arr,len);

  system("pause");

  return 0;
}