#include<stdio.h>
int main()
{
    int i,j,k;

    for(i = 1; i <= 2; i++)
    {
        printf("This is 1st\n");
        for(j = 1; j <= 3; j++)
        {
            printf("2nd\n");
            for(k = 1; k <= 5; k++)
            {
                printf("Third\n");
            }
        }
    }

    return 0;
}
