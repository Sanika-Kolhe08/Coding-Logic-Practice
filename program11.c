/*
    START
        Accept no. as No
        If No is completely divisible by two 
            then print even 
        Otherwise 
            print odd
    STOP

    START
        Accept no. as N
        Divide no by 2
        IF Remainder is 0
            then print as Even
        Otherwise
            print as Odd

    STOP
*/

#include <stdio.h>

int main()
{
    int iValue=0;                               //local Variable
    int iRemainder=0;                           //Local Variable
    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRemainder=iValue%2;

    if(iRemainder==0)
    {
        printf("Number is Even\n");
    }

    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}