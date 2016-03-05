#include "3.1.c"
 nodetype *combine(nodetype *ha,nodetype *hb)
  {
    nodetype *hc=ha,*pa=ha,*pb=hb,*q,*r;
     if (len(pa)!=len(pb))
       { 
         printf("两个单链表的长度不同");
         return NULL;
        }
     while(pa!=NULL)
      { 
        q=pa->next;r=pb->next;
        pa->next=pb;pb->next=q;
        pa=q;pb=r;
      }
      return (hc);
   }
   
     void main()
      {
        nodetype *heada,*headb,*headc;
        heada=create();
        headb=create();
        headc=combine(heada,headb);
        disp(headc);
      }
