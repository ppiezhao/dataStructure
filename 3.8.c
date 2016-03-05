#include "3.1.c"
nodetype *split(nodetype *ha)
  {
   nodetype *p=ha->next,*hb,*q,*ra,*rb;
    ra=ha;
    ra->next=NULL;
    hb=(nodetype *)malloc(sizeof(nodetype));
    hb->next=NULL;
    rb=hb;
    rb->next=NULL;
      while (p!=NULL)
       {
        q=p->next;
        ra->next=p;
        ra=p;
        ra->next=NULL;
        p=q;
        if (p!=NULL)
          {
           q=p->next;
           rb->next=p;
           rb=p;
           rb->next=NULL;
           p=q;
          }
       } 
       return hb;
    };
   
    void main()
      {
       nodetype *heada,*headb,*s;
       heada=create();
       disp(heada);
       s=(nodetype *)malloc(sizeof(nodetype));
       s->next=heada;
       heada=s;
       headb=split(heada);
       s=heada;heada=heada->next;free(s);
       s=headb;headb=headb->next;free(s);
       disp(heada);
       disp(headb);
       } 
