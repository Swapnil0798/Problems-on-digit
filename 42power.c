#include<stdio.h>
//Input: 2  4
//Output: 16
int power(int ino1,int ino2)
  {
    int icnt=0;
    int imult=1;
    for(icnt=1;icnt<=ino2;icnt++)
    {
       imult=imult*ino1;
    }

    return imult;

   }
   ////////////////////////////////////
   //accept two no from anf display power
   // of 1st no
   ////////////////////////////////////
   
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;

    printf("enter base:");
    scanf("%d",&ivalue1);

    printf("enter power:");
    scanf("%d",&ivalue2);
  
    iret=power(ivalue1,ivalue2);
    printf("result is:\n%d",iret);
    return 0;
}