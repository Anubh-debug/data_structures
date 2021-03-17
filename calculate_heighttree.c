#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};
int calculate_height(struct node* curr) /*function to calculate height of tree*/
{
    if(curr->left!=NULL) /*if left child is not null we will move till left child becomes null*/
        return 1+calculate_height(curr->left);
    if(curr->left==NULL && curr->right!=NULL) /*if left child is null we go to right child*/
        return 1+calculate_height(curr->right);
    if(curr->left==NULL && curr->right==NULL)
        return 0;
}
int main()
{
    struct node* root = (struct node*)malloc(sizeof(struct node));
    struct node* left1 = (struct node*)malloc(sizeof(struct node));
    struct node* right1 = (struct node*)malloc(sizeof(struct node));
    struct node* left2 = (struct node*)malloc(sizeof(struct node));
    struct node* left3 = (struct node*)malloc(sizeof(struct node));
    struct node* right2 = (struct node*)malloc(sizeof(struct node));
    struct node* right3 = (struct node*)malloc(sizeof(struct node));
    root->left = left1;
    root->data = 1;
    root->right = right1;
    left1->left = left2;
    left1->data = 2;
    left1->right = left3;
    right1->left = right2;
    right1->data = 3;
    right1->right = right3;
    left2->left = NULL;
    left2->data = 4;
    left2->right = NULL;
    left3->left = NULL;
    left3->data = 5;
    left3->right = NULL;
    right2->left = NULL;
    right2->data = 6;
    right2->right = NULL;
    right3->left = NULL;
    right3->data = 7;
    right3->right = NULL;
    printf("%d",calculate_height(root));
}
