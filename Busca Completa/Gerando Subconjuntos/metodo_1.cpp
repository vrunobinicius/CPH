#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> subset;
void search(int k)
{
    if (k == n)
    {
        cout << "{ ";
        for (auto v : subset)
        {
            cout << v << " ";
        }
        cout << "}\n";
    }
    else
    {
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
    return;
}

int main(int argc, char const *argv[])
{
    cin >> n;
    search(0);
    return 0;
}
