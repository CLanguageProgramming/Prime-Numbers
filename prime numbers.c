#include <stdio.h>
int main()
{
    printf("Enter a number:- ");
    int enter;
    scanf("%d", &enter);
    int a = 1;
    int prime = 0;
    while(a <= enter)
    {
        if (enter % a == 0)
        {
            prime++;
        }
        a++;
    }
    if(prime > 2)
    {
        printf("%d is not a prime number\n", enter);
        printf("Factors are:- \n");
        a = 1;
        while(a <= enter)
    {
        if (enter % a == 0)
        {
            printf("%d \t", a);
        }
        a++;
    }
    }
    else
    {
        printf("%d is a prime Number", enter);
    }
    getchar();
    getchar();
}