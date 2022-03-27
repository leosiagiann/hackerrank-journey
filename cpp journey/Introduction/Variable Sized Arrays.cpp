#include "bits/stdc++.h"
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, l, x, y;
    cin >> n >> q;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        vector<int> input;
        for (int j = 0; j < k; j++)
        {
            cin >> l;
            input.push_back(l);
        }
        a.push_back(input);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << a.at(x).at(y) << endl;
    }
    return 0;
}
