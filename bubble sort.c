#include<stdio.h>
#include<stdlib.h>
//写一个冒泡排序
void bubble_sort(int *arr,int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    bubble_sort(arr,len);
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
    system("pause");
    return 0;
}