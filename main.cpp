#include "MaxPQ.h"
#include "MaxPQ.cpp"
#include <utility>
using namespace std;

int main()
{
    BST<int, int> x;
    pair<int, int> a(30, 1);
    pair<int, int> b(5, 2);
    pair<int, int> c(40, 3);
    pair<int, int> d(2, 4);
    pair<int, int> e(35, 5);
    pair<int, int> f(80, 6);
    pair<int, int> y[6] = {a, b, c, d, e, f};
    for (int i = 0; i < 6; i++)
    {
        x.Push(y[i]);
    }
    cout << x.Top()->first << endl;
    x.Pop();
    cout << x.Top()->first << endl;
    x.Pop();
    cout << x.Top()->first << endl;
    return 0;
}
