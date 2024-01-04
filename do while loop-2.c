#include<stdio.h>
int main()
{
    int i = -10;

    do
    {
        printf("The loop works\n");

        i = i - 3;
    }
    while (i >= -16);

    return 0;
}
