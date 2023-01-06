#ifndef MAXPQ_H
#define MAXPQ_H
#include <utility>
using namespace std;
template <class K, class E>
class MaxPQ
{
public:
    // virtual destructor
    virtual ~MaxPQ() {}
    // return true iff the prioity queue is empty
    virtual bool IsEmpty() const = 0;
    // return reference to max element
    virtual const pair<K, E> *Top() const = 0;
    // add an element to the prioity queue
    virtual void Push(const pair<K, E> &) = 0;
    // delete element with max priority
    virtual void Pop() = 0;
};

template <class K, class E>
class BST : public MaxPQ<K, E>
{
    class TreeNode;

public:
    BST(TreeNode *init = 0) { root = init; }
    ~BST();
    const pair<K, E> *Top() const;
    void removeSubtree(TreeNode *Ptr);
    bool IsEmpty() const { return root == 0; }
    void Push(const pair<K, E> &x);
    void Pop();

private:
    class TreeNode
    {
    public:
        TreeNode(pair<K, E> x) : data(x), leftChild(0), rightChild(0){};
        pair<K, E> data;
        TreeNode *leftChild;
        TreeNode *rightChild;
    };
    TreeNode *root;
};
#endif