#include<stdio.h>
//Input: 2  4
//Output: 16
unsigned long int power(int ino1,int ino2)
  {
    int icnt=0;
    unsigned long int lmult=1;
    for(icnt=1;icnt<=ino2;icnt++)
    {
       lmult=lmult*ino1;
    }

    return lmult;

   }
   ////////////////////////////////////
   //accept two no from anf display power
   // of 1st no
   ////////////////////////////////////
   
int main()
{
    int ivalue1=0;
    int ivalue2=0;
   unsigned long int lret=0;

    printf("enter base:");
    scanf("%d",&ivalue1);

    printf("enter power:");
    scanf("%d",&ivalue2);
  
    lret=power(ivalue1,ivalue2);
    printf("result is:\n%ld",lret);
    return 0;
}