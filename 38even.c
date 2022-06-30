#include<stdio.h>
//count
//Input:7856
//output:
// 6
// 
// 8
// 
////////////
void Displayeven(int ino)
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

         if(iDigit%2==0)
         {
             printf("%d\n",iDigit);
         }
         ino=ino/10;
          
    }


}
//////////////////////////////////////////////////
//Date:26/04/2022
//even digit
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("enter no");
    scanf("%d",&ivalue);

    Displayeven(ivalue);
    
    
    
    return 0;
}