#include<stdio.h>
//Input:7856
//output:
// 6
// 5
// 8
// 7
////////////
void DisplayDigits(int ino)
{
    int iDigit=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)//(ino<o)
    {
         iDigit=ino%10;
         printf("%d\n",iDigit);

         ino=ino/10;
         
    }

}
//////////////////////////////////////////////////
//Date:26/04/2022
//asignment no6 q1
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    printf("enter no");
    scanf("%d",&ivalue);
    DisplayDigits(ivalue);
    return 0;
}