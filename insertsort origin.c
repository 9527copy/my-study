#include<stdio.h>
#include<stdlib.h>

void print(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
}

void insertsort(int a[],int n)
{
  for(int i=1;i<n;i++)
  {
    int key=a[i];

    int j=i-1;

    while(j>=0&&key<a[j])
    {
      a[j+1]=a[j];//最多先前不断移动j次
      j--;
    }

    a[j+1]=key;

    print(a,n);
  }
}

int main()
{
  int arr[]={2,4,8,0,5,7,1,3,9};
  int len=sizeof(arr)/sizeof(arr[0]);

  printf("before: ");
  print(arr,len);

  insertsort(arr,len);

  printf("after: ");
  print(arr,len);

  system("pause");

  return 0;
}