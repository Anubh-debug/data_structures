#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};

/*this function will traverse tree in preorder*/
void preorder(struct node *t)
{
    if(t)
    {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }else{
    printf("null ");
    return;
    }
}

/*this function will traverse the tree in inorder*/
void inorder(struct node *t)
{
    if(t)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }else{
    printf("null ");
    return;
    }
}

/*this function will traverse the tree in postorder*/
void postorder(struct node *t)
{
    if(t)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }else{
    printf("null ");
    return;
    }
}

/*count number of nodes*/
int count_nodes(struct node* curr)
{
    if(curr == NULL)
        return 0;
    return (1 + count_nodes(curr->left) + count_nodes(curr->right));
}

/*ciunt number of leaves*/
int count_leaves(struct node* curr)
{
    if(curr->left == NULL && curr->right == NULL)
        return 1;
        else
            return count_leaves(curr->left) + count_leaves(curr->right);
    if(curr==NULL)
        return 0;
}

/*count number of non-leaves*/
int count_nl(struct node* curr)
{
    if(curr->left==NULL && curr->right==NULL)
    {
        return 0;
    }else{
    return 1+count_nl(curr->left) + count_nl(curr->right);
    }
    if(curr==NULL)
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

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);

    printf("\n");
    printf("%d",count_nodes(root));

    printf("\n");
    printf("%d",count_leaves(root));

    printf("\n");
    printf("%d",count_nl(root));
}
