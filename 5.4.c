#include<stdio.h>
int f1(int n,int m)
 {
  if ((n>=0 && m==0) || (n>=0 && m==n))
   return(1);
   else 
    {
     if (n>m && n>=0 && m>=0)
      return(f1(n-1,m)+f1(n-1,m-1));
      else
       {
        printf("n,m值不正确\n");
        return(-1);
       }
     }
  };

void main()
{
  int n,m;
  printf("输入n m:");
  scanf("%d %d",&n,&m);
  printf("C(%d,%d)=%d\n",n,m,f1(n,m));
} 
