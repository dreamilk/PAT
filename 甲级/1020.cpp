#include<stdio.h>
#include<queue>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

int maxn=100;
int n;
int postorder[100];
int inorder[100];

void create(Node* &root,int pl,int pr,int il,int ir){
	if(il>ir){
		root=NULL;
		return;
	}
	root=(Node*)malloc(sizeof(Node));
	root->data=postorder[pr];
	root->left=NULL;
	root->right=NULL;
	int i;
	for(i=il;i<ir;i++){
		if(postorder[pr]==inorder[i]){
			break;
		}
	}
	
	int numleft=i-il;
	
	
	create(root->left,pl,pl+numleft-1,il,i-1);
	
	create(root->right,pl+numleft,pr-1,i+1,ir);	
}

void levelorder(Node* r){
	queue<Node*> q;
	int x=0;
	q.push(r);
	Node* p;
	while(!q.empty()){
		p=q.front();
		q.pop();
		printf("%d",p->data);
		x=x+1;
		if(x!=n){
			printf(" ");
		}
		if(p->left!=NULL){
			q.push(p->left);
		}
		if(p->right!=NULL){
			q.push(p->right);
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&postorder[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&inorder[i]);
	}
	
	Node* r=NULL;
	create(r,0,n-1,0,n-1);
	levelorder(r);
}
