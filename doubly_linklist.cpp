#include <stdio.h>
#include <stdlib.h>

struct node{
int x;
int y;
struct node* prev;
struct node* next;
};
//struct node* tail=NULL;

struct node* insert(struct node *tail,int a,int b)
{	struct node *temp =(struct node *)malloc(sizeof(struct node));
	temp->x = a;
	temp->y = b;
	temp->next = NULL;
	temp->prev = NULL;
	if(tail == NULL){
		temp->next = temp;
		temp->prev = temp;
		tail = temp;
	}
	else {
		temp->prev= tail;
		temp->next = tail->next;
		tail->next->prev = temp;
		tail->next = temp;
		tail = temp;
	}
	return tail;
}
void display(struct node *tail)
{	if(tail==NULL)return;
	struct node* ptr = tail->next;
	while(ptr!=tail){
		printf("x = %d\ty = %d\n",ptr->x,ptr->y);
		ptr = ptr->next;
	}
	printf("x = %d\ty = %d\n",tail->x,tail->y);
}

struct node* del(struct node* tail){
	printf("Delete\n");
	struct node *ptr=NULL;
	if(tail == NULL){
		printf("Empty");
		return NULL;
	}
	else if(tail->next == tail){
		printf("Deletedx = %d\ty = %d\n",tail->x,tail->y);
		free(tail);
		return NULL;
	}
	else {
		ptr = tail;
		printf(" Deleted in  x = %d\ty = %d\n",ptr->x,ptr->y);
		tail->prev->next = tail->next;
		tail->next->prev = tail->prev;
		tail = tail->prev;
		free(ptr);
		tail = del(tail);
	}
	return tail;
}

int main()
{	struct node *tail = NULL;
	tail = insert(tail,1,2);
	display(tail);
	tail = insert(tail,2,3);
	display(tail);
	tail = insert(tail,4,5);
	display(tail);
	tail=del(tail);
	printf("Empty::");
	display(tail);
//tail=del(tail);
	return 0;
}

