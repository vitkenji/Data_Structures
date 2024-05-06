#include "binarytree.h"

int main()
{
    Tree* tree = createTree();
    tree = buildTree(1, buildTree(2, buildTree(3, buildTree(6, NULL, NULL), buildTree(7, NULL, buildTree(8, NULL, NULL))), buildTree(5, NULL, NULL)), buildTree(4, NULL, NULL));
    preOrder(tree);
    
    printf("\n %d", calculateHeight(tree));
    return 0;
}