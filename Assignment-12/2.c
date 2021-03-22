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

void addAtbegin(struct node** temp, int data)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = data;
    t->next = *temp;
    *temp = t;

}
void addAtLast(struct node** temp, int data)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));
    while((*temp)->next)
    {

    }
    t->data = data;
    t->next = NULL;
    (*temp)->next = t;

}
void addAtPosition(struct node** temp, int data, int i)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));


    while(i - 1  && *temp)
    {
        (*temp) = (*temp)->next;
        i--;
    }
    t->data = data;
    t->next = (*temp)->next;
    (*temp)->next = t;

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
    struct node* p = NULL;

    addAtbegin(&p, 8);
    Display(p);
    addAtLast(&p, 16);
    Display(p);
    addAtPosition(&p, 10, 1);
    Display(p);
    addAtPosition(&p, 34, 1);
    Display(p);

    return 0;
}

