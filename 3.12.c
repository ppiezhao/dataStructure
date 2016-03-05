#include "3.10.c"
void split(nodetype *ha,nodetype *hb,nodetype *hc)
 {
  char c;
  nodetype *ra,*rb,*rc,*p=ha->next;
  ra=ha;ra->next=NULL;
  rb=hb;rb->next=NULL; 
  rc=hc;rc->next=NULL; 
  while (p!=ha)
   {
    c=p->data;
    if ((c>='a' && c<='z')  || (c>='A' && c<='Z'))
     {
      ra->next=p;ra=p;
     }
     else if (c>='0' && c<='9')
      {
       rb->next=p;rb=p;
      }
      else 
       {
        rc->next=p;rc=p;
       }
     p=p->next;
    }
    ra->next=ha;rb->next=hb;rc->next=hc;
  };
 
   void main()
    {
     nodetype *ha,*hb=NULL,*hc=NULL,*s,*p;
     ha=cyccreate();
     p=ha;
     while (p->next!=ha) p=p->next;
     s=(nodetype *)malloc(sizeof(nodetype));
     s->next=ha;ha=s;
     p->next=ha;
     s=(nodetype *)malloc(sizeof(nodetype));
     s->next=hb;hb=s;
     s=(nodetype *)malloc(sizeof(nodetype));
     s->next=hc;hc=s;
     split(ha,hb,hc);
     cycdisp(ha);
     cycdisp(hb);
     cycdisp(hc);
    }
 
