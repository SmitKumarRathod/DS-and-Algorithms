#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp{
 int no;
 struct emp *prev;
 struct emp *next;
 };
 typedef struct emp E;
 E* add(E*);
 void view(E*);
 E* insfir(E*);
 E* insany(E*);
 E* delfir(E*);
 E* delany(E*);
 E* delast(E*);
 int main(){
   E *first=NULL;
   int ch=0;
   while(ch!=8){
     printf("\n1.add");
     printf("\n2.view");
     printf("\n3.insfir");
     printf("\n4.insany");
     printf("\n5.delfir");
     printf("\n6.delany");
     printf("\n7.dellast");
     printf("\n8.exit");
     printf("\n choose your option: ");
     scanf("%d",&ch);
     switch(ch){
      case 1: first=add(first); break;
      case 2: view(first);  break;
      case 3: first=insfir(first);  break;
      case 4: first=insany(first); break;
      case 5: first=delfir(first);  break;
      case 6: first=delany(first); break;
      case 7: first=delast(first); break;
      }
      getch();}}
      E* delast(E *h){
	E *cur=h;
	while(cur->next->next!=NULL){
	  cur=cur->next;
	  }
	cur->next=NULL;
	return h;
	}
    E* insfir(E *h){
       E *cur=h;
       cur=(E*)malloc(sizeof(E));
       cur->next=h;
       h->prev=cur;
       h=cur;
       printf("\n ENTER NUMBER: ");
       scanf("%d",&cur->no);
       cur->prev=NULL;
       return h;
       }
       E *insany(E *h){
	  E *cur=h;
	  E *temp;
	  int n;
	  printf("\n ENTER NO BEFORE ENTER: ");
	  scanf("\n%d",&n);
	  while(cur->next->no!=n){
	    cur=cur->next;
	    }
	    temp=(E*)malloc(sizeof(E));
	    temp->prev=cur;
	    temp->next=cur->next;
	    cur->next=temp;
	    temp->next->prev=temp;
	    cur=cur->next;
	    printf("\n ENTER NUMBER: ");
	    scanf("%d",&cur->no);
	    return h;
	    }
	    E* delfir(E *h){
	      E *cur=h;
	      h=h->next;
	      h->prev=NULL;
	      return h;
	      }
	      E* delany(E *h){
	       E *cur=h;
	       int n;
	       printf("\n ENTER NO TO DELETE: ");
	       scanf("%d",&n);
	       while(cur->next->no!=n){
		 cur=cur->next;
		 }
		 cur->next=cur->next->next;
		 cur->next->prev=cur;
	       return h;
	       }
E* add(E *h){
	E *cur=h;
	if(cur==NULL){
	  cur=(E*)malloc(sizeof(E));
	  cur->prev=NULL;
	  h=cur;}
	  else{
	   E *temp;
	   while(cur->next!=NULL){
	    cur=cur->next;
	    }
	    cur->next=(E*)malloc(sizeof(E));
	    temp=cur;
	    cur=cur->next;
	    cur->prev=temp;
	    }
printf("\n ENTER VALUE: ");
scanf("\n %d",&cur->no);
	    cur->next=NULL;
	    return h;
	    }
	    void view(E *h){
	       E *cur=h;
	       while(cur!=NULL){
printf("\n%d",cur->no);
		   cur=cur->next;
		   }
		   }

