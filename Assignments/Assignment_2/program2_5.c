#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    return (iNo % 2 == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);

    if(bRet)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}
