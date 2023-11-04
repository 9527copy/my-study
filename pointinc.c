//输入三个数输出升序排列输出三个数
#include<stdio.h>
#include<stdlib.h>

void swap(int *p1,int *p2)
{
  int temp;

  temp=*p1;
  *p1=*p2;
  *p2=temp;

}

int main()
{
    int a,b,c;//,*pointer_1,*pointer_2,*pointer_3;

  printf("plase enter three intager number： \n");
  scanf("%d %d %d",&a,&b,&c);

  // pointer_1=&a;
  // pointer_2=&b;
  // pointer_3=&c;

  // if(a<b)
  // {
  //   swap(pointer_1,pointer_2);
  // }

  // if(b>c)
  // {
  //   swap(pointer_2,pointer_3);
  // }

  printf("The order is: %d %d %d\n",a,b,c);

  system("pause");
  return 0;
}