#include<stdio.h>
#include<stdbool.h>
bool chkpalindrome(int ino)
{
   int iDigit=0;
   int iRev=0;
   int itemp=0;
   if(ino<0)
   {
       ino=-ino;
   }
   itemp=ino;
   while(ino>0)
   {
       iDigit=ino%10;
       iRev=iRev*10+iDigit;


       ino=ino/10;
   } 
   if(iRev==itemp)
   {
       return true;
   }
   else
   {
       return false;
   }

    
}
//////////////////////////////////////////////////
//Date:26/04/2022
//revese
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    bool bret=0;
    printf("enter no\n");
    scanf("%d",&ivalue);

   bret=chkpalindrome (ivalue);
   
   if(bret==true)
   {
       printf("%d no is palindrome");
   }
   else
   {
       printf("%dthe no is not palimdrome");
   }


    
    return 0;
}