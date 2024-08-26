#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> permutation;

int main(int argc, char const *argv[])
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        permutation.push_back(i);
    }

    do
    {
        cout << "{ ";
        for (auto v : permutation)
        {
            cout << v << " ";
        }
        cout << "}\n";
    } while (next_permutation(permutation.begin(), permutation.end()));

    return 0;
}
