#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//菜单的打印
void menu()
{
  printf("\t数学工具箱\t\n");
  printf("--------------------\n");
  printf("1,方程求解\n");
  printf("2,三角形面积计算\n");
  printf("3,计算器\n");
  printf("4,打印图片\n");
  printf("0,退出\n");
  printf("--------------------\n");

}


//四个功能的实现
//1,求方程的梗
void equation()
{
  int a,b,c,dat,x1,x2;

  printf("请输入一元二次方程ax^2+bx+c=0的三个系数:\n");
  scanf("%d,%d,%d",&a,&b,&c);

  dat=b*b-4*a*c;

  if(dat>0)
  {
    printf("方程的两不等的根为:\n");
    x1=(-b+sqrt(dat))/(2*a);
    x2=(-b-sqrt(dat))/(2*a);
    printf("x1=%d,x2=%d\n",x1,x2);
  }
  else if(dat==0)
  {
    printf("方程的两相等的根为:\n");
    x1=x2=-b/(2*a);
    printf("x1=x2=%d\n",x1);
  }
  else{
    printf("方程无解\n");
  }
  
  
  system("pause");
  system("cls");

}
//2，求三角形面积
void triangle()
{
  float a,b,c,s,area;

  printf("请输入三角形的三条边长:\n");
  scanf("%f,%f,%f",&a,&b,&c);

  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));

  printf("三角形面积为:%f\n",area);

  system("pause");
  system("cls");
}
//3，计算器
void calculator()
{
  
  
  system("cls");

  system("pause");


}
//4，打印图形
void print()
{
}


//选择功能
int choice()
{
  
  
  int choice;

  while (1)
  {
    menu();
    printf("请输入你的选择：\n");
    scanf("%d",&choice);
      
      switch(choice)
    {
      case 0:
        printf("欢迎下次使用\n");
        return 0;//结束循环
        break;
      case 1:
        printf("方程求解\n");
        equation();
        break;
      case 2:
        printf("三角形面积计算\n");
        triangle();
        break;
      case 3:
        printf("计算器\n");
        calculator();
        break;
      case 4:
        printf("打印图片\n");
        break;
      default:
        printf("输入错误！\n");
        break;
    }

  }
  
  system("pause");
  system("cls");
}


int main()
{
  // 用户登录
  // 用户名：a
  // 密码：123456
  char n;
  int psw;

  while(1)
  {
    printf("\t登陆界面\t\n");
    printf("请输入用户名：\n");
    scanf("%c",&n);
    printf("请输入密码：\n");
    scanf("%d",&psw);
    if(n=='a'&&psw==123456)
    {
      printf("登陆成功！\n");
      system("pause");
      system("cls");
      choice();
      break;
    }
    else
    {
      printf("用户名或密码错误！\n");
      system("pause");
      system("cls");
    }

  }
  system("pause");
  return 0;
  
}