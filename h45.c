
#include"head45.h"

ULONG power(int ino1,int ino2)
  {
    int icnt=0;
    ULONG lmult=1;
    for(icnt=1;icnt<=ino2;icnt++)
    {
       lmult=lmult*ino1;
    }

    return lmult;

   }
   