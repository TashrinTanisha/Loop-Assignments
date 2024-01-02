#include<stdio.h>
int main()
{
    int n,sum = 0;

    for(n = 30; n <= 120; n++)
    {
        if(n % 3 == 0 && n % 5 == 0)
        {
            sum = sum + n;
        }
    }
    printf("Summation : %d\n",sum);
    return 0;
}
