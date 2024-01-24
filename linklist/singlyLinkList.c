

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;
head = NULL;

// inserting at Beginning
void insertAtBegining(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d",&value);
    newNode->data = value;
    if(head == NULL) {
        newNode ->next = NULL;
        head = newNode;
    }

    else {
        newNode->next = head;
        head = newNode;
    }
    printf("\n N-*-*ode inserted Successfully at beginning\n");

}

// inserting  at End

void insertAtEnd(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
    }
    else {
        struct node *temp;
        temp = NULL;
        while(temp->next != NULL ) {
            temp = temp->next;
            temp->next = newNode;
        }

        printf("Insertion at the End is Sucessfully Done");
    }
}

// insertion at Specific positionn 
void insertAtSpecificPostion(int value, int pos) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter in which position you want to insert: ");
    scanf("%d",&pos);
    printf("Enter the number: ");
    scanf("%d",&value);
    newNode ->data = value;

    if(head == NULL) {
        newNode->next = NULL;
        head = newNode;
        printf("Linklist is empty so Automatically insered at first position");
    }

    else {
        struct node *temp;
        temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Insertion at %d position is sucessfully done",pos);

}

// Deletion Opertion on Linklist;

void deleteAtBegining() {
    struct node *temp;
    if(head ==NULL) {
        printf("Linklist already empty");
    }

    else{
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node is deleted at the begining");
    }
}


//deletion at end;
void deletedAtEnd() {
    struct node *temp,*temp1;
    if(head == NULL) {
        printf("Linklist is already empty");
    }
    else if(head->next == NULL) {
        head = NULL;
        free(head);
    }
    else{
        temp = head;
        while(temp->next != NULL) {
            temp1 = 
            temp = temp->next;
            temp
        }===x 
    }
}
