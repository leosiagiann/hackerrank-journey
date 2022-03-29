#include "bits/stdc++.h"
using namespace std;
#define pr pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define vt vector
#define cl clear
#define vd void
#define rv reverse
#define ll long long
#define balik(n) strrev(n)
#define f first
#define s second
#define rt(n) return (n)
#define cn(n) cin >> n
#define sz(n) n.size()
#define FOR(n, i) for (int i = 0; i < n; i++)
#define FOR_(n, m) for (int i = m; i < n; i++)
#define FOREACH(n, x) (auto &x : n)
#define ct(n) cout << n
#define nl() cout << endl
#define SORT(n) sort(n.begin(), n.end())
#define SORTB(n) sort(n.begin(), n.end(), greater<int>())
#define min(n) *min_element(n.begin(), n.end())
#define min_in(n) min_element(n.begin(), n.end()) - n.begin()
#define max(n) *max_element(n.begin(), n.end())
#define max_in(n) max_element(n.begin(), n.end()) - n.begin()
int main()
{
    int a, count = -1;
    cn(a);
    int b[a];
    FOR(a, i)
    {
        cn(b[i]);
    }
    FOR(a, i)
    {
        if (i < a - 2 && b[i + 2] == 0)
            i++;
        count++;
    }
    ct(count);
    nl();
    rt(0);
}
