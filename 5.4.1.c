#include<stdio.h>
#define MaxLen 50
int f2(int n,int m)
 {
  int st[MaxLen][3], top=0, s1, s2;
  if (n<m || n<0 || m<0)
   {printf("m,n值不正确");
    return(-1);
   }
  st[top][0]=0; // 
  st[top][1]=n; // 
  st[top][2]=m; // 
  do
   {
    printf("top=%d %d %d %d\n",top,st[top][0],st[top][1],st[top][2]);
    if (st[top][0]==0)
     {
      top++;
      st[top][0]=0;
      st[top][1]=st[top-1][1]-1;   //=n-1
      st[top][2]=st[top-1][2];     //=m
      if (st[top][2]==0 || st[top][1]==st[top][2])
       st[top][0]=1;
     }
    if (top>=1 && st[top][0]>0 && st[top-1][0]==0)
     {
      top++;
      st[top][0]=0;
      st[top][1]=st[top-2][1]-1;
      st[top][2]=st[top-2][2]-1;
      if (st[top][2]==0 || st[top][1]==st[top][2])
       st[top][0]=1;
     }
    if (top>1 && st[top][0]>0 && st[top-1][0]>0)
     {
      s1=st[top][0];
      s2=st[top-1][0];
       top=top-2;
      st[top][0]=s1+s2;
     }
  }while (top>0);
  return(st[0][0]);
 };
  

void main()
 {
  int n,m;
  printf("输入n m:");
  scanf("%d %d",&n,&m);
  printf("C(%d, %d)=%d\n",n,m,f2(n,m));
} 
