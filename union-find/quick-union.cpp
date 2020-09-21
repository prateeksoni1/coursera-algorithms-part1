#include <bits/stdc++.h>
using namespace std;

class UF
{
    vector<int> id;

    int root(int x)
    {
        while (x != id[x])
            x = id[x];

        return x;
    }

public:
    UF(int n)
    {
        id = vector<int>(n);
        for (int i = 0; i < n; i++)
        {
            id[i] = i;
        }
    }

    bool connected(int a, int b)
    {
        return root(id[a]) == root(id[b]);
    }

    void unionTwo(int a, int b)
    {
        id[b] = root(id[a]);
    }

    void print()
    {
        for (auto i : id)
        {
            cout << i << " ";
        }
    }
};

int main()
{

    UF uf(5);

    uf.unionTwo(1, 2);
    uf.unionTwo(3, 4);

    uf.print();
}