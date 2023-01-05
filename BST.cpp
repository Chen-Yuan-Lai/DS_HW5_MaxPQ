#include <iostream>
#include "BST.h"
using namespace std;

template <class K, class E>
void BST<K, E>::removeSubtree(TreeNode *Ptr)
{
    if (!Ptr->leftChild)
        removeSubtree(Ptr->leftChild);
    if (!Ptr->rightChild)
        removeSubtree(Ptr->rightChild);
    delete Ptr;
}

template <class K, class E>
BST<K, E>::~BST()
{
    removeSubtree(root);
}

template <class K, class E>
void BST<K, E>::Push(const pair<K, E> &x)
{
    // search for the Pair.first, pp is parent of p
    TreeNode *p = root, *pp = 0;
    while (p)
    {
        pp = p;
        if (x.first < p->data.first)
            p = p->leftChild;
        else if (x.first > p->data.first)
            p = p->rightChild;
        else
        {
            p->data.second = x.second;
            return;
        }
    }
    // perform insertion
    p = new TreeNode(x);
    if (root) // root not empty
    {
        if (x.first < pp->data.first)
            pp->leftChild = p;
        else
            pp->rightChild = p;
    }
    else
        root = p;
}

template <class K, class E>
void BST<K, E>::Pop()
{
    if (IsEmpty())
        throw "the tree is empty";
    TreeNode *p;
    while (p)
    {
        if ()
    }
}
