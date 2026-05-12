#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemainder=0; 

    iRemainder=iNo % 2;

    if(iRemainder==0)
    {
        printf("Number is Even\n");
    }

    else
    {
        printf("Number is Odd\n");
    }
}
int main()
{
    int iValue=0;                               //local Variable
    int iRemainder=0;                           //Local Variable
    printf("Enter a number: \n");
    scanf("%d\n",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}