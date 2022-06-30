#include<stdio.h>
//count
//Input:7856
//output:
// 14
int Displayevensum(int ino)
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
         

         if(iDigit%2==0)
         {
             isum=isum+iDigit;
         }
         ino=ino/10;
          
    }
    return isum;


}
//////////////////////////////////////////////////
//Date:26/04/2022
//sum of even digit
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("enter no");
    scanf("%d",&ivalue);

   iret= Displayevensum(ivalue);
   printf("sum of even no is:%d",iret);
    
    
    
    return 0;
}