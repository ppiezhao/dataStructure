#include "3.10.c"
nodetype *delprev(nodetype *p)
 {
  nodetype *r=p,*q=r->next;
  while (q->next!=p)
   {
    r=r->next;
    q=r->next;
   }
    r->next=p;
    free(q); 
    return (p);
  };
 
  void main()
   {
    nodetype *h;
    int i; 
    h=cyccreate(); 
    printf("输入任意节点编号:"); 
    scanf("%d",&i);
    while (i-->1) h=h->next;
    cycdisp(h); 
    h=delprev(h); 
    cycdisp(h); 
   }

