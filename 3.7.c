#include "3.1.c"
 nodetype *subs(nodetype *heada,nodetype *headb)
  {
    nodetype *p,*q,*r,*s;
    s=(nodetype *)malloc(sizeof(nodetype));
    s->next=heada;
    heada=s;
    p=heada->next;
     r=heada;r->next=NULL;
    while (p!=NULL)
      { q=headb;
        while (q!=NULL && q->data!=p->data) q=q->next;
        if (q!=NULL)
         {  s=p->next;
            free(p);p=s;
         }
        else
         { r->next=p;s=p->next;
           r=p;r->next=NULL;
           p=s;
          }
       }
     s=heada;heada=heada->next;free(s);
     return heada;
   };
    
  void main()
   {
   nodetype *ha,*hb,*hc;
   ha=create();
   hb=create();
   hc=subs(ha,hb);
   printf("A与B集合相减的结果\n");
   disp(hc);
   }
