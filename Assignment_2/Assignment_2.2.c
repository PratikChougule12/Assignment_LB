#include<stdio.h>

void Display(int iNo)
{
    // Write Updater 
    
    while(iNo >= 1)
    {
        printf("*");
        iNo--; 
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}