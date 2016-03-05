#include<stdio.h>
#define MaxLen  50
typedef int elemtype;
typedef elemtype sqlist[MaxLen];

  int creat(sqlist A)
  {
  int i,n;
  printf("创建一个顺序表\n");
  printf("输入元素个数:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {printf("输入第%d个元素:",i+1);
   scanf("%d",&A[i]);
  }
   return n;
  };
  
  void disp(sqlist A,int n)
 {
   int i;
  printf("输入一个顺序表:\n");
  if (n==0) printf("空表");
  for(i=0;i<n;i++)
   printf("%d ",A[i]);
  };
 
 int comb(sqlist A,int na,sqlist B,int nb)
  {
    int n=na,m=nb;
    if(na+nb>MaxLen) return 0;
    while (nb>0)
       if((na==0)||(A[na-1]<B[nb-1]))
        { A[na+nb-1]=B[nb-1];
          nb--;
        }
      else 
      { 
        A[na+nb-1]=A[na-1];
        na--;
      }
    na=n+m;
    return na;
   };
  

  void main()
  {
  int creat(sqlist A);
  void disp(sqlist A,int n);
 int comb(sqlist A,int na,sqlist B,int nb);
    sqlist A,B;
    int na,nb;
    na=creat(A);
    nb=creat(B);
    disp(A,na);
    disp(B,nb);
    na=comb(A,na,B,nb);
    disp(A,na);
  }
