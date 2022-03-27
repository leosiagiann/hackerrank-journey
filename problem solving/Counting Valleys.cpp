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
    ll a, last = 0, hit = 0;
    cn(a);
    char b[a];
    cn(b);
    FOR(a, i)
    {
        if (b[i] == 'U')
            hit++;
        else
            hit--;
        if (hit == 0 && b[i] == 'U')
            last++;
    }
    ct(last);
    nl();
    rt(0);
}
