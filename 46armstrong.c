#include<stdio.h>
#include<stdbool.h>
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

bool chkarmstrong(int ino)
{
    int itemp=0;
    int icnt=0;
    int icnt1=0;
    int isum=0;
    
    itemp=ino;
    while(ino!=0)
    {
      icnt++;
      
      ino=ino/10;
     
    }

    ino=itemp;
    while(ino!=0)
    {
        icnt1=ino%10;
        isum=isum+power(icnt1,icnt);
        ino=ino/10;    
    }

 if(isum==itemp)
   {
    return true;
   }
   else
   {
       return false;
   }


}
int main()
{
    int ivalue=0;
    bool bret=0;

    printf("enter the no");
    scanf("%d",&ivalue);
   
    bret=chkarmstrong(ivalue);
    if(bret==true)
    {
        printf("no is armsstrong");
    }
    else
    {
        printf("no is not armsstromg");
    }


    return 0;
}
//1634
//1^4+6^4+3^4+4^4=1634
//153
//1^3+5^3+5^3=153
//8208
//9474