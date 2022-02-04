#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void ENQUEUE();
void DEQUEUE ();
void display();
void main ()
{
    int choice =0;
    while(choice !=4)
    {
        printf("\n=================MENU===================\n");
        printf("\n 1.ENQUEUE\n 2.DEQUEUE\n 3.Show\n 4.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            ENQUEUE();
            break;
            case 2:
            DEQUEUE();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Please enter valid choice..");
        }
    }
}
void ENQUEUE()
{
     struct node *temp=head;
    int value;
    struct node *newNode=malloc(sizeof(struct node));
    printf("enter the value to insert");
    scanf("%d",&value);
    newNode->data=value;
    newNode->next=NULL;
   if(head==NULL)
    {
        head=newNode;
        newNode->next=head;
    }
    else
    {
       while(temp->next!=head)
       {
         temp=temp->next;
       }
     temp->next=newNode;
     newNode->next=head;
     }
   printf("one element was inserted\n");
 }
void DEQUEUE()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n node deleted\n");
    }
    else
    {   temp = head;
        while(temp -> next != head)
        temp = temp -> next;
        temp->next = head->next;
        free(head);
        head = temp->next;
        printf("\n node deleted\n");
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(head == NULL)
    {
        printf("\n nothing to print");
    }
    else
    {
        printf("\n printing values ... \n");
        while(temp -> next != head)
        {
            printf("%d ", temp-> data);
            temp = temp -> next;
        }
        printf("%d\n", temp -> data);
    }

}
