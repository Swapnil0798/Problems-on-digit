#include<stdio.h>
//count
//Input:7856
//output:
// 6
// 5
// 8
// 7
////////////
int DisplayDigits(int ino)
{
    
    int icnt=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)//(ino<o)
    {
         
          icnt++;

         ino=ino/10;
          
    }
    return icnt;

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

   iret= DisplayDigits(ivalue);
    printf("the no digit is : %d",iret);
    
    
    return 0;
}