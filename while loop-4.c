#include<stdio.h>
int main()
{
    int n = 1;

    while(n <= 100)
    {
        if(n % 2 == 0)
        {
            printf("The loop works\n");
            printf("%d\n",n);
        }
        n++;
    }

    return 0;
}
