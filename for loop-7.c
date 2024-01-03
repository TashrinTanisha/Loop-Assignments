#include<stdio.h>
int main()
{
    /*Write a for loop which will print the following numbers
    100
    90
    80
    ..
    ..
    0
    */

    int number;

    for(number = 100; number >= 0; number = number - 10)
    {
        printf("The loop prints the numbers\n");
        printf("%d\n",number);

    }
    printf("The program is end\n");

    return 0;
}
