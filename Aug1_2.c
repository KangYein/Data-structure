#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct ListNode{//노드 타입 
	element data;
	struct ListNode *link;
}ListNode;
ListNode* insert_first(ListNode *head, element value){
	ListNode *p =(ListNode *)malloc(sizeof(ListNode));
	p->data =value;//NULL 대신 복사(추가 노드를 위해) 
	p->link =head;//헤드 포인터 변경 
	return head;
}
void display(ListNode *head){
	ListNode *p =head;
	for(p =head; p!=NULL; p=p->link){
		printf("%d->",p->data);
	}
	printf("NULL \n");
}
main(void){
	ListNode *head=NULL;
	head = insert_first(head,10);
	head = insert_first(head,20);
	display(head);
}
