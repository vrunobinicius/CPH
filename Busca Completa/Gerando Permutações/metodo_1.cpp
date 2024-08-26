#include <bits/stdc++.h>

using namespace std;

#define MAXN 100'000'000

int n;
vector<int> permutation;
bool chosen[MAXN] = {false};

void search()
{
    if (permutation.size() == n)
    {
        cout << "{ ";
        for (auto v : permutation)
        {
            cout << v << " ";
        }
        cout << "}\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    search();

    return 0;
}
