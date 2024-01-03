#include<stdio.h>
int main()
{
    // Write a for loop which will print the summation of all numbers which are divided by 3 & 5 between 30 to 120
    int number,sum = 0;

    for(number = 30; number <= 120; number++)
        if(number % 3 == 0 & number % 5 == 0)
        {
            sum = sum + number;
        }
    printf("Summation : %d\n",sum);

    return 0;
}
