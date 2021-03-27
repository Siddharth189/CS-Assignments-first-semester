/**i. Write a function to add a node at the beginning of the list to store a given integer.
ii. Write a function to add a node at the end of the list to store a given integer.
iii. Write a function to add a node at the i th node of the list to store a given integer.
iv. Write a function to delete the first node of the list returning the stored integer in the node.
v. Write a function to delete the last node of the list returning the stored integer in the node.
vi. Write a function to delete the i th node of the list returning the stored integer in the node.
vii. Write a function to print the list.
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* newNode(int data)
{
    struct node* p = (struct node*) malloc(sizeof(struct node));

    p -> data = data;
    p -> next = NULL;

    return (p);
}

struct node* addAtbegin(struct node* temp, int data)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = data;
    t->next = temp;
    temp = t;

    return (temp);
}
struct node* addAtLast(struct node* temp, int data)
{
    struct node* t = (struct node*) malloc(sizeof(struct node));
    struct node* tempa = temp;
    while((temp -> next) != NULL)
    {
        temp = temp->next;
    }

    t->data = data;
    t->next = NULL;
    (temp)->next = t;

    return tempa;
}
struct node* addAtPosition(struct node* temp, int data, int i)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));

    struct node* tempa = temp;

    if(i == 0)
        tempa = addAtbegin(temp, data);
    else
    {
        while((i - 1) && (temp->next))
        {
            (temp) = (temp)->next;
            i--;
        }
        t->data = data;
        t->next = (temp)->next;
        (temp)->next = t;

    }
    return tempa;
}

int deleteAtbegin(struct node** temp)
{
    int data = (*temp)->data;
    (*temp) = (*temp)->next;

    return (data);
}

int deleteAtLast(struct node** temp)
{
    struct node* flag = *temp;

    while(((*temp)->next->next))
    {
        (*temp) = ((*temp)->next);
    }
    int data = ((*temp)->next->data);
    (*temp)->next = NULL;

    *temp = flag;
    return data;
}
int deleteAtPosition(struct node** temp, int i)
{
    int data = 0;
    if(i == 0)
        deleteAtbegin(temp);
    else
    {
        struct node* flag = *temp;
        while((i - 1) && ((*temp)->next->next))
        {
            (*temp) = (*temp)->next;
            i--;
        }

        data = (*temp)->next->data;
        (*temp)->next = NULL;

        *temp = flag;
        return (data);
    }
}

void Display(struct node* p)
{
    while(p)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node* head = NULL;
    head = newNode(5);

    Display(head);

    head = addAtbegin(head, 10);

    Display(head);

    head = addAtLast(head, 15);

    Display(head);

    head = addAtPosition(head, 1000, 1);

    Display(head);

    int dataATBegin = deleteAtbegin(&head);

    Display(head);
    printf("Deleted data is %d\n\n", dataATBegin);

    int dataATLast = deleteAtLast(&head);

    Display(head);
    printf("Deleted data is %d\n\n", dataATLast);


    int dataATPosition = deleteAtPosition(&head, 0);

    Display(head);
    printf("Deleted data is %d\n", dataATPosition);



    return 0;
}
