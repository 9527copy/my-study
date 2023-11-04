#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int*arr,int n)
{
  int end=n;
  while(end)
  {
    for(int i=0;i<end-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
    --end;//循环n次
  }
}

int main()
{
  int array[]={4,2,8,0,5,7,1,3,9};
  int n=sizeof(array)/sizeof(array[0]);
  printf("before: ");

  for(int i=0;i<n;i++)
  {
    printf("%d ",array[i]);
  }

  BubbleSort(array,n);

  printf("\n");

  printf("after: ");

  for(int i=0;i<n;i++)
  {
    printf("%d ",array[i]);
  }

  system("pause");
  return 0;
}