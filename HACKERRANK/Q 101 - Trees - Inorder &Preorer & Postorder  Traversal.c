#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define scan(x) scanf(" %d", &x)
struct TreeNode {
	int x;
	struct TreeNode* L;
	struct TreeNode* R;
};
typedef struct TreeNode TreeNode;
TreeNode* newNode(int _x) {
	TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
	node->x = _x;
	node->L = node->R = NULL;
  return node;
}
TreeNode* insert(TreeNode* node, int val) {
	if (node == NULL) return newNode(val);
	if (val <= node->x) node->L = insert(node->L, val);
	else node->R = insert(node->R, val);
return node;
}

/*********************************************************/
void inorder(struct TreeNode* root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->L); 
        printf("%d ", root->x);         
        inorder(root->R);
  } 
}

void preorder(struct TreeNode* root) 
{ 
    if (root != NULL) 
    { 
	printf("%d ", root->x);         
        preorder(root->L); 
        preorder(root->R);
  } 
}

void postorder(struct TreeNode* root) 
{ 
    if (root != NULL) 
    { 
        postorder(root->L); 
        postorder(root->R);
        printf("%d ", root->x);         

  } 
}


/*******************************************************/

int main() {
	int val, N; scan(N);
	TreeNode* Root = NULL;
	for (int i = 1; i <= N; i++) {
		scan(val);
		Root = insert(Root, val);
	}
	printf("Inorder Traversal");
	inorder(Root);
	printf("\nPreorder Traversal");
	preorder(Root);
	printf("\nPostorder Traversal");
	postorder(Root);
	
}
