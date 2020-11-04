#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


struct node
{
    char data[256];
    struct node *next;
};

void luckyCustomer ( struct node **head_11, char *key)
{
	struct node *temp = (*head_11), *prev;
	
	if (temp != NULL && strcmp(temp -> data, key) == 0)
	{
		*head_11 = temp -> next;
	}
	
	else
	{
		while (temp != NULL && strcmp(temp-> data, key) != 0)
		{
			prev = temp;
			temp = temp -> next;
		}
		
		if (temp == NULL)
		{
			printf(" There isn't such a customer. \n");
			return;
		}
		prev -> next = temp -> next;
		
	}
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	struct node *end = *head_11;
	strcpy(new_node -> data, temp -> data);
	new_node -> next=NULL;
	
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new_node;
	free(temp);
	
}

void admit(struct node **head_11)
{
	if (*head_11 == NULL)
	{
		printf("The queue is empty.\n");
		return;
	}
	
	struct node *next_node = (*head_11) -> next;
	printf("%s admitted\n", (*head_11) -> data);
	free(*head_11);
	
	*head_11 = next_node;
}
	
void append(struct node **head_11, char *key)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	struct node *end = *head_11;
	strcpy(new_node -> data, key);
	new_node -> next = NULL ;
	
	while (end -> next != NULL)
	{
		end = end -> next;
	}
	end -> next = new_node;
}

void printList(struct node *Node){
    printf(" Queue: ");
    while(Node != NULL){
    	if (Node -> next == NULL) 
    		printf("%s", Node -> data); 
    	
        else 
        	printf("%s, ", Node->data);
        
        Node = Node->next;      
    }
    printf("\n");
}	
	
void deleteList(struct node **head_11){   
	struct node *current = *head_11, *next;

	while (current != NULL){
		next = current -> next;
		free(current);
		current = next;
	}

	*head_11 = NULL;
}


int main()
{

	struct node *head = (struct node*)malloc(sizeof(struct node));

    strcpy(head->data, "Nihad");
    head->next = NULL;
    append(&head, "Agasif");
    append(&head, "Vasif");
    append(&head, "Asif");
    append(&head, "Turqut");
    
    printList(head);
    
    char input[256];
    bool quit = 0;
    
	while(!quit)
	{
		printf("\n INPUT: ");
		scanf( "%s" , input);
		
    	if (strcmp(input,"quit") == 0)
        	quit = 1;

    	else if (strcmp(input,"admit") == 0)
  			admit(&head);
  		
  		else
    		luckyCustomer(&head, input);
  		
  		printList(head);
  	
  	}
  	deleteList(&head);
  	
  	return 0;
        
      
   
}
