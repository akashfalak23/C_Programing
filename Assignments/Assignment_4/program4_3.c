#include<stdio.h>

void NonFact(int iNo)
{
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);
    
    NonFact(iValue);
    return 0;
}
