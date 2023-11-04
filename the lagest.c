#include<stdio.h>
#include<stdlib.h>
//输入三个数输出其中最大的
int main()
{
    int a, b, c;
    printf("请输入三个整数：\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c) {
        printf("最大数是%d\n", a);
    } else if (b > a && b > c) {
        printf("最大数是%d\n", b);
    } else {
        printf("最大数是%d\n", c);
    }
    system("pause");
    return 0;
}
