#include<stdio.h>

int FactDiff(int iNo)
{
    int iFactSum = 0, iNonFactSum = 0;

    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iFactSum += i;
        }
        else
        {
            iNonFactSum += i;
        }
    }
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    int iRet = FactDiff(iValue);

    printf("Difference: %d\n", iRet);
    
    return 0;
}
