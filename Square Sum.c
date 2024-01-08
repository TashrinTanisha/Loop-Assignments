#include<stdio.h>
int main()
{
    //Print the summation of squares of all numbers from 5 to 25

    int number,sum = 0;

    for(number = 5; number <= 25; number++)
    {

        sum = sum + (number*2);
    }

    printf("%d\n",sum);

    return 0;
}
