#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

     if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
    
}

int main()
{
    int iVlaue1 = 15,iVlaue2 =5;
    int iRet = 0;

    iRet = Divide(iVlaue1,iVlaue2);

    printf("Division is %d",iRet);
    return 0;
}