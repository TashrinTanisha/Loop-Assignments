#include<stdio.h>
int main()
{
    int n;

    for(n = 100; n >= 0; n = n - 10)
    {
        printf("The program works\n");
        printf("%d\n",n);
    }
    printf("The program is end\n");
    return 0;
}
//100
//90
//.
//.
//0
