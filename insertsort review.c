#include<stdio.h>
#include<stdlib.h>

void print_array(int*arr,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

void insertsort(int*arr,int n)
{
  for(int i=1;i<n;i++)
  {
    int j=i-1;
    int key=arr[i];
    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

int main()
{
  int arr[]={2,4,8,0,5,7,1,3,9};
  int n=sizeof(arr)/sizeof(arr[0]);

  printf("before: ");
  print_array(arr,n);

  insertsort(arr,n);

  printf("after: ");
  print_array(arr,n);

  system("pause");
  return 0;
}