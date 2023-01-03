#ifndef MAXPQ_H
#define MAXPW_H
#include <utility>
using namespace std;
template <class T>
class MaxPQ
{
public:
    // virtual destructor
    virtual ~MaxPQ() {}
    // return true iff the prioity queue is empty
    virtual bool IsEmpty() const = 0;
    // return reference to max element
    virtual const T &Top() const = 0;
    // add an element to the prioity queue
    virtual void Push(const T &) = 0;
    // delete element with max priority
    virtual void Pop() = 0;
};

template <class k, class E>
class BST : public MaxPQ<K, E>
{
    class TreeNode;

public:
    BST(TreeNoide<K, E> *init = 0) { root = init; };
    void Push(const pair<K, E> &x);
    void Pop();

private:
    class TreeNode
    {
    public:
        TreeNode(pair<K, E> &x) : data(x), leftChild(0), rightChild(0){};
        pair<K, E> data;
        TreeNode *leftChild;
        TreeNode *rightChild;
    };
    TreeNode *root;
};
#endif