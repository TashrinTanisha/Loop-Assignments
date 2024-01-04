#include<stdio.h>
int main()
{
    int number = 100;
    do
    {
        printf("%d\n",number);
        number = number - 5;
    }
    while (number >= 0);
    return 0;
}
