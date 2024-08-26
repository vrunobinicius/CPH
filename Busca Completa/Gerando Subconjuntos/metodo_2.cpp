#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> subset;

int main(int argc, char const *argv[])
{
    cin >> n;

    for (int i = 0; i < (1 << n); i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << j << " ";
            }
        }
        cout << "}\n";
    }

    return 0;
}
