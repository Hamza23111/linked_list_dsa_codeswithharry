#include <stdio.h>
#include <stdlib.h>



// Define the structure of a node


struct Node {
    int data;
    struct Node* next;
}typedef Node;



 
//this function will place at end of list



Node* insertAtEnd(Node *head,int data){



 Node * newNode = (struct Node *) malloc(sizeof(struct Node));
 Node* ptr=head;
 newNode->data=data;
  while(ptr->next !=NULL){
    ptr=ptr->next;
 }
 ptr->next=newNode;
 newNode->next=NULL;
 return head;
 }








 //this function will place after a node


 struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    ptr->next = prevNode->next;//this will make his forward neighbour newNode neighbour
    prevNode->next = ptr;
 
    return head;
}




// Function to insert a node at the beginning of the linked list


Node* insertAtFirst(Node* headref, int data) {
     Node* newNode =  (Node*)malloc(sizeof(Node));
 newNode->data=data;
 newNode->next=headref;
 return newNode;
    
}


// Function to print the linked list



void printList(Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}



//function to print at certain index



Node* insertAtIndex(Node* head, int index, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    

    

    Node* ptr = head;
    int i = 0;
    while (i < index - 1 ) { // Traverse to the node before the desired index
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL) { // If index is out of bounds
        printf("Index out of bounds\n");
        free(newNode); // Free the allocated memory for the new node
        return head; // Return the original head
    }

    newNode->next = ptr->next; // Insert the new node
    ptr->next = newNode;

    return head;
}



void main() {
 Node* head = (Node*)malloc(sizeof(Node));
 Node* second = (Node*)malloc(sizeof(Node));
 Node* third = (Node*)malloc(sizeof(Node));

 // Inserting some elements at the beginning of the list
 head->data=55;
 head->next=second;

 second->data=15;
 second->next=third;

 third->data=1;
 third->next=NULL;
 printf("before,Linked list: ");

 printList(head);

 //head=insertAtIndex(head,3,7);
 //head=insertAfterNode(head,second,7);
 //head=insertAtFirst(head,17);
 //head=insertAtEnd(head,13);


 // Printing the linked list
 printf("Linked list: ");
 printList(head);

    
 }

