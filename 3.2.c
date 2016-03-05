#include "3.1.c"
int comp(nodetype *ha,nodetype *hb)
 {
  nodetype *pa=ha,*pb=hb;
  while (pa!=NULL && pb !=NULL && pa->data==pb->data)
    {
     pa=pa->next;
     pb=pb->next;
    }
    if (pa==NULL && pb==NULL) return 0;
    if (pa==NULL && pb!=NULL) return -1;
    if (pa!=NULL && pb==NULL) return 1;
    if (pa->data>pb->data)
      return 1;
     else 
      return -1;
  };
 
  void main()
  {
    nodetype *ha,*hb;
   int n;
   ha=create();
   hb=create();
   n=comp(ha,hb);
   switch(n)
     {
   case 0:printf("A=B\n");break;
   case 1:printf("A>B\n");break;
   case -1:printf("A<B\n");break;
     }
  }
