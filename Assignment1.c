#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int value;
  struct Node* left;
  struct Node* right;
};

struct Node* newNode(int value) 
{ 
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->value = value; 
    node->left = NULL;
    node->right = NULL; 
    return (node); 
}

int maxsum(struct node* first)
{
	if(first == NULL)
		return 0;
	int leftOne = maxsum(first -> left);
	int rightOne = maxsum(first -> right);
	if(leftOne > rightOne)
		return leftOne + first->value;
	else
		return rightOne + first->value;
}

int main(){
  struct Node* root = newNode(5);
  root->left = newNode(10);
  root->right = newNode(15);
  root->left->left = newNode(20);
  root->left->right = newNode(25);
  
  
 
  printf("maxsum is %d",maxsum(root));

  return 0;
}
    
    
    
    
    
    

	
	




