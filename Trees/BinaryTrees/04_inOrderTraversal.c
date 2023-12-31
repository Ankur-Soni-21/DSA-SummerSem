#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *right;
    struct Node *left;
};

struct Node *createNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
    return node;
}

struct Node *connectNode(struct Node *root, struct Node *l, struct Node *r)
{
    root->left = l;
    root->right = r;
    return root;
}

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d\n", root->data);
        inOrder(root->right);
    }
}
int main()
{
    //! making a function for it....
    // struct Node *p = createNode(2);
    // struct Node *p1 = createNode(1);
    // struct Node *p2 = createNode(4);
    // struct Node *p3 = createNode(11);
    // struct Node *p4 = createNode(12);
    // struct Node *p5 = createNode(3);

    // p = connectNode(p, p1, p2);
    // p1 = connectNode(p1, p3, p4);
    // p2 = connectNode(p2, NULL, p5);

    struct Node *p = createNode(9);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(11);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(7);
    struct Node *p5 = createNode(5);
    struct Node *p6 = createNode(8);
    struct Node *p7 = createNode(15);
    struct Node *p8 = createNode(16);

    p = connectNode(p, p1, p2);
    p1 = connectNode(p1, p3, p4);
    p2 = connectNode(p2, NULL, p7);
    p4 = connectNode(p4, p5, p6);
    p7 = connectNode(p7, p8, NULL);

    inOrder(p);
    return 0;
}