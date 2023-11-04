#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
//数的序号和你要比较的数，从某一位置开始向前循环比较
void insertsort(int a[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = a[i]; //记录要移动的数

    int j = i - 1; //记录位置，从这个数开始从后往前比较,例如i=1时j就为0即代表从arr[0]开始为第一个比较对象

    while (j >= 0 && a[j] > key) //往前不断比较循环直到将要移动的数排到正确的位置
    {
      a[j + 1] = a[j]; //比key要大的数往后挪一个位置
      j--;
    }

    a[j + 1] = key; //返还记录值
  }
}

int main()
{
  int array[] = {2, 4, 8, 0, 5, 3, 1, 7, 9};
  int len = sizeof(array) / sizeof(array[0]);

  printf("before: ");
  print_array(array, len);

  insertsort(array, len);

  printf("after: ");
  print_array(array, len);

  system("pause");
  return 0;
}