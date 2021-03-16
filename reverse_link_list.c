#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *reverse_linked_list(struct node* curr) //function to reverse the linked list
{
    struct node* prev = NULL;
    struct node* nextnode = NULL;
    while(curr)
    {
        nextnode = curr->link;
        curr->link = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev;
}

void recursive_traverse(struct node* n) //function to traverse the linked list
{
    if(n==NULL)
        return;
    printf("%d ",n->data);
    recursive_traverse(n->link);
}

int main()
{
    struct node* head;
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    struct node* node2 = (struct node*)malloc(sizeof(struct node));
    struct node* node3 = (struct node*)malloc(sizeof(struct node));
    struct node* node4 = (struct node*)malloc(sizeof(struct node));
    struct node* node5 = (struct node*)malloc(sizeof(struct node));
    struct node* node6 = (struct node*)malloc(sizeof(struct node));
    struct node* node7 = (struct node*)malloc(sizeof(struct node));
    struct node* node8 = (struct node*)malloc(sizeof(struct node));
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node5->data = 5;
    node6->data = 6;
    node7->data = 7;
    node8->data = 8;
    node1->link = node2;
    node2->link = node3;
    node3->link = node4;
    node4->link = node5;
    node5->link = node6;
    node6->link = node7;
    node7->link = node8;
    node8->link = NULL;
    head=node1;

    struct node* prev = reverse_linked_list(head);
    recursive_traverse(prev);
}
