#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
   
    printf("Numbers divisible by 3 and containing 5:\n");

    for (int i = 0; i <= 1000; i++)
    {
        int temp = i;
        int hasFive = 0;

        while (temp != 0)
        {
            if (temp % 10 == 5)
            {
                hasFive = 1;
                break;
            }

            temp /= 10;
        }

        if (i % 3 == 0 && hasFive)
        {
            printf("%d ", i);
            count++;

            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}