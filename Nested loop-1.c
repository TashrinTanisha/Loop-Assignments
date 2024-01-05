#include<stdio.h>
int main()
{
    int i,j;

    for(i = 1; i <= 4; i++)
    {
        printf("This is outer loop\n");
        for(j = 1; j <= 3; j++)
        {
            printf("This is inner loop\n");
        }
    }

    return 0;
}
