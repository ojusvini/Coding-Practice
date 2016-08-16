#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
int val;
int name;
struct node *lchild;
struct node *rchild;
struct node *parent;
};

struct node *root=NULL;
int nodes = 0;
int a[33];

void check(struct node *n) {
	int t;
	if(n==root) return;
	if(n->parent->val > n->val) {
	t= n->parent->val;
	n->parent->val = n->val;
	n->val = t;
	t = n->parent->name;
	n->parent->name = n->name;
	n->name = t;
	check(n->parent);
	}
}

int getbinary() {
memset(a,0,sizeof(a));
if(nodes == 0) return 0;
int n = nodes,i = 0;
while(n!=0){
a[i]=n%2;
n=n/2;
i++;
}
return i;
}

void createnode(int ch,int value) {
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->val = value;
	n->name = ch;
	n->lchild = NULL;
	n->rchild = NULL;
	n->parent = NULL;
	nodes++;
	if(nodes == 1) {
	root = n;
	//printf("Root node created\n");
	}
	else {
	struct node *t = root;
	struct node *parent = NULL; 
	int l = getbinary();
	int i;
	for(i=l-2;i>=0;i--){
	parent = t;
	if(a[i]==0) 
		t =t->lchild;
	else
		t= t->rchild;
		if(t==NULL){
			if(a[i]==0) parent->lchild = n;
			else parent->rchild = n;
			n->parent = parent;
			check(n);
			//printf("Node created %d with parent %d\n",n->val,n->parent->val);
			}
	}
	
	}
}


void inorder(struct node *n){
if(n == NULL)
return;
inorder(n->lchild);
printf("%d\t",n->name);
inorder(n->rchild);
}
void maxify(struct node *n)
{
	if(n->lchild==NULL && n->rchild== NULL) return;
	struct node *small = n;
//	char *item;
	int temp;
	if(n->lchild->val < n->val) small = n->lchild;
	if((n->rchild!=NULL) && (small->val > n->rchild->val)) small = n->rchild;
	if(small!=n) {
		temp = small->val;
		small->val = n->val;
		n->val = temp;
		temp = small->name;
		small->name = n->name;
		n->name = temp;
		maxify(small);
	}
}

void delete_key()
{
	if(root==NULL){
		printf("Empty heap\n");
		return;
	}
	int item = root->name;
	printf("Deleted value %d\n",item);
	int l = getbinary();
	struct node *t= root;
	struct node *parent = NULL;
	int i,temp;
	if(l==1){
		free(root);
		root = NULL;
		nodes = 0;
		return;
	}
	for(i=l-2;i>=0;i--){
		parent = t;
		if(a[i]==0) t =t->lchild;
		else t= t->rchild;
	}
//	if(t==NULL) printf("hi\n");	
	if(a[0]==0) {
			temp = parent->lchild->val;
	//		parent->lchild->val = root->val;
			root->val = temp;
			temp = parent->lchild->name;
	//		parent->lchild->name = root->name;
			root->name = temp;
			t = parent->lchild;
			parent->lchild = NULL;
			maxify(root);
	}
	else {
		temp = parent->rchild->val;
	//	parent->rchild->val = root->val;
		root->val = temp;
		temp = parent->rchild->name;
	//	parent->rchild->name = root->name;
		root->name = temp;
		t = parent->rchild;
		parent->rchild = NULL;
		maxify(root);
	}
	free(t);
	nodes--;
}


int main()
{int i;
int ch;

while(1) {
	scanf("%d%d",&ch,&i);
	if(i==-1) break;
	createnode(ch,i);
}
inorder(root);
printf("\n");
int n = nodes;
for(i=0;i<n;i++){
	delete_key();
//	printf("%s\n",t);
}
return 0;
}
