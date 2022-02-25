#include <stdio.h>

int main()

{
    int num, temp = 0;
    printf("Enter any number to Check for Prime: ");
    scanf("%d", &num);
    int i = 2;

    if (num == 1)
    {
        goto one;
    }

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            temp++;
        }
        i++;
    }

    if (temp == 0)
    {
        printf("%d is a Prime Number", num);
    }

    else
    {
        printf("%d is Not a Prime Number", num);
    }

    one:
        printf("Not a prime nor a constant.");

    return 0;
}
