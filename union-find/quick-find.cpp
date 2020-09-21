#include <bits/stdc++.h>
using namespace std;

class UF
{
    vector<int> id;

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
        return id[a] == id[b];
    }

    void unionTwo(int a, int b)
    {
        int aid = id[a];
        int bid = id[b];

        for (int i = 0; i < id.size(); i++)
        {
            if (id[i] == aid)
            {
                id[i] = bid;
            }
        }
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