#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void reverse(struct Node** head)
{
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    while (current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head = prev;
}
void insert(struct Node** head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
	{
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Node* head = NULL;
    insert(&head, 20);
    insert(&head, 4);
    insert(&head, 15);
    insert(&head, 85);
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    return 0;
}
