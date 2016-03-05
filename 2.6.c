#include "sq.c"
int comp(sqlist A,int na,sqlist B,int nb)
 {
   int i=0,j=0;
  while (i<na && j<nb && A[i++]==B[i++]);
  i--;j--;
  if (i==na && j==nb) return 0;
  if (i==na && j!=nb) return -1;
  if (i!=na && j==nb) return 1;
  if (A[i]>B[j]) return 1;
   else return -1;
 };
  void main()
 { 
     sqlist A,B;
     int na,nb,n;
     na=creat(A);
     nb=creat(B);
     n=comp(A,na,B,nb);
     switch(n)
     {
       case 0:printf("A=B\n");break;
       case 1:printf("A>B\n");break;
       case -1:printf("A<B\n");break;
      }
  } 
 
