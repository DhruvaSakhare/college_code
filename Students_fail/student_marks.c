#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Incorrect Entry");
    }
    else if(marks<40)
    {
        printf("Fail");
    }
    else if(marks>=40 && marks<50)
    {
        printf("Third Class");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Second Class");
    }
    else if(marks>=60 && marks<75)
    {
        printf("First Class");
    }
    else
    {
        printf("Distinction");
    }
    return 0;
}
