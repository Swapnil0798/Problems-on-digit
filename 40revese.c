#include<stdio.h>
//count
//Input:7856
//output:
//7856
int Reverse(int ino)
{
   int iDigit=0;
   int iRev=0;
   while(ino>0)
   {
       iDigit=ino%10;
       iRev=iRev*10+iDigit;

       ino=ino/10;
   } 
  return iRev;  
    
}
//////////////////////////////////////////////////
//Date:26/04/2022
//revese
/////////////////////////////////////////

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("enter no\n");
    scanf("%d",&ivalue);

   iret= Reverse(ivalue);
   printf("Reveserse no is:%d",iret); 
    
    return 0;
}