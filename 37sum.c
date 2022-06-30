#include<stdio.h>
//count
//Input:7856
//output:
// 6
// 5
// 8
// 7
////////////
int SumDigits(int ino)
{
    int isum=0;
    int iDigit=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)//(ino<o)
    {
          iDigit=ino%10;
             isum=isum+iDigit; 
          isum=ino/10;            
        sumdigit(isum);  
    }
    return isum;

}
//////////////////////////////////////////////////
//Date:26/04/2022
//asignment no6 q1
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("enter no");
    scanf("%d",&ivalue);

    iret=SumDigits(ivalue);
    printf("the no of sum is: %d",iret);
    
    
    return 0;
}