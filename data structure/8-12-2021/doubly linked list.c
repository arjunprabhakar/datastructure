#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
}*head = NULL;
void insertAtFront();
void insertAtEnd();
void insertAtPosition();
void deleteBeg();
void deleteend();
void deleterandom();
void display();
int main()
{
    int choice;
    printf("\n 1.insert beginning\n 2.insert end\n 3.insert specific \n 4.delete front \n ");
    printf("5.delete end \n 6.delete specific \n 7.display\n 8.To exit\n");
    while (choice!=8)
    {
     printf("\nEnter Choice : ");
     scanf("%d", &choice);
     switch (choice)
      {
        case 1:
            insertAtFront();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            deleteBeg();
            break;
        case 5:
            deleteend();
            break;
        case 6:
            deleterandom();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Enter a valid choice\n");
      }
    }
}
void insertAtFront()
{
    int value;
    struct node *newnode = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &value);
    if(head==NULL)
    {
     newnode->data = value;
     newnode->next = NULL;
     newnode->prev=NULL;
     head = newnode;
    }
   else
    {
     newnode->data = value;
     head->prev=newnode;
     newnode->next=head;
     newnode->prev=NULL;
     head=newnode;
    }
     printf("one node was inserted at beginning...\n");
     display();
}
void insertAtEnd()
{
    int value;
    struct node *newnode = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &value);
    newnode->data = value;
    struct node *temp;
    temp = head;
    while (temp->next != NULL)
        {
        temp = temp->next;
        }
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=NULL;
    printf("one node was inserted at ending...\n");
    display();
}
void insertAtPosition()
{
 struct node*temp;
 temp=head;
 int item,pos;
 struct node*newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the element:");
 scanf("%d",&item);
 printf("enter the location:");
 scanf("%d",&pos);
 newnode->data=item;
 if(head==NULL)
   {
    newnode->next=NULL;
    newnode->prev=NULL;
    head=newnode;
   }
  else
   {
    while(temp->data!=pos)
    {
     if(temp->next==NULL)
        {
            printf("\n element not found:");
        }
        else
        {
         temp=temp->next;
        }
    }
      newnode->prev=temp;
      newnode->next=temp->next;
      temp->next=newnode;
   }
 display();
}
void deleteBeg()
{
   if(head==NULL)
   {
    printf("deletion is not possible , linked list is empty");
   }
   else if(head->next==NULL)
   {
    head=NULL;
    printf("one node was deleted");
   }
   else
   {
    head->next->prev=NULL;
    head=head->next;
    printf("one node was deleted");
   }
    display();
}
void deleteend()
{
   if(head==NULL)
   {
    printf("deletion is not possible , linked list is empty");
   }
   else if(head->next==NULL)
   {
   head=NULL;
   printf("one node was deleted");
   }
   else
   {
   struct node *temp=head;
   while(temp->next!=NULL)
   {
   temp=temp->next;
   }
   temp->prev->next=NULL;
   temp->prev=NULL;
   free(temp);
   printf("one node was deleted");
   }
    display();
}
void deleterandom()
{
   int key;
   if(head==NULL)
   {
    printf("deletion is not possible , linked list is empty");
   }
   struct node *temp=head;
   printf("\n enter the value to delete:");
   scanf("%d",&key);
   if(head->data==key && head->next==NULL)
   {
   head=NULL;
   printf(" node was deleted");
   }
   else if(head->data==key && head->next!=NULL)
   {
    head->next->prev=NULL;
    head=head->next;
    printf("one node was deleted");
   }
   else
   {
    while(temp->data!=key && temp->next!=NULL)
    {
     temp=temp->next;
    }
   if(temp->next==NULL && temp->data!=key)
   {
       printf("Deletion not possible");
   }
   else if(temp->next==NULL && temp->data==key)
   {
    temp->prev->next=NULL;
    temp->prev=NULL;
    free(temp);
    printf("one node was deleted");
   }
   else
   {
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    printf("one node was deleted");
   }
 }
  display();
}
void display()
{
    struct node *temp;
    temp=head;
    if(head == NULL)
    {
        printf("\n empty linked list");
    }
    else
    {
        printf(" printing values ... \n");
        while(temp -> next != NULL)
        {
            printf(" %d--> ", temp-> data);
            temp = temp -> next;
        }
        printf("%d-->NULL", temp -> data);
    }
}

