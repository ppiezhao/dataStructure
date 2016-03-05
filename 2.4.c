#include "sq.c"
void invert(sqlist A,int n)
 {
   int m=n/2,i;
   elemtype temp;
   for (i=0;i<m;i++)
   { temp=A[i];
     A[i]=A[n-i-1];
     A[n-i-1]=temp;
    }
 };
 void main()
  {
    sqlist A;
    int n;
    n=creat(A);
    disp(A,n);
    invert(A,n);
    disp(A,n);
  }
