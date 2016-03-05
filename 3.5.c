#include "3.1.c" 
#define N 10
 void sat(nodetype *h,int a[])
   {
     nodetype *p=h;
     while (p!=NULL)
      {
        a[p->data]++;
        p=p->next;
      }
    };
   void main()
  {
    int a[N+1],i;
    for (i=0;i<=N;i++)
       a[i]=0;
    nodetype *head;
    head=create();
    sat(head,a);
    printf("候选人:");
    for (i=1;i<=N;i++)
    printf("%d\t",i);
     printf("\n");
    printf("得票数:");
    for (i=1;i<=N;i++)
     printf("%d\t",a[i]);
     printf("\n");
  }

