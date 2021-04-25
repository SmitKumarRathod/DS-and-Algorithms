#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node N;

N* create(N* h);/*
N* addAtBE(N* h);
N* addAtLoc(N* h);
N* delSpe(N* h);
N* delFirst(N* h);
N* delLast(N* h);*/
void view(N* h);

int main(){
	N* head;
	int opt;
	do{
		printf("\n\n ********** MENU ********** ");
		printf("\n 1) Create Circular List:- ");
		printf("\n 2)Add an Element at Beg/End:- ");
		printf("\n 3)Add an Element after any specific value:- ");
		printf("\n 4)Delete a specific  Element:- ");
		printf("\n 5)Delete a Last Element:- ");
		printf("\n 6)Delete a First Element:- ");
		printf("\n 7)View:- ");
		printf("\n 8)Exit:- ");
		printf("\n ENTER YOUR OPTION:- ");
		scanf("%d",&opt);

		switch(opt){
			case 1 : head=create(head); break;/*
			case 2 : head=addAtBE(head); break;
			case 3 : head=addAtLoc(head); break;
			case 4 : head=delSpe(head); break;
			case 5 : head=delLast(head); break;
			case 6 : head=delFirst(head); break;*/
			case 7 : view(head); break;
			case 8 : exit(0); break;
		}
	}while(opt!=8);
	return 0;
}

N* create(N* h){
	N* cur=h;
	if(cur==NULL){
		h=(N*)malloc(sizeof(N));
		cur=h;
	}
	else{
		while(cur->next!=h)
			cur=cur->next;
		cur->next=(N*)malloc(sizeof(N));
		cur=cur->next;
	}
		cur->next=h;
		printf("\n Enter a Data:- ");
		scanf("%d",&cur->data);
	return h;
}

void view(N* h){
	N* cur=h;
	if(h==NULL)
		printf("\n LIST IS EMPTY!");
	else{
		do{
		printf("\n DATA:- %d",cur->data);
		cur=cur->next;
		}	while(cur!=h);
	}
}
