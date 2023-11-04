#include<stdio.h>
#include<stdlib.h>

void InsertSort(int*arr,int n)
{
  for(int i=0;i<n-1;i++)
  {
    int end=i;

    int temp=arr[end+1];

    while(end>=0)
    {
      if(temp<arr[end])
      {
        arr[end+1]=arr[end];
        end--;
      }
      else
      {
        break;
      }
    }

    arr[end+1]=temp;

  }
}

int main()
{
  int array[]={2,4,8,0,5,7,1,3,9};
  int len=sizeof(array)/sizeof(array[0]);

  printf("before: ");
  for(int i=0;i<len;i++)//由于数组第一个数是array[0]即从0开始计数则小于len
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