#include <bits/stdc++.h>

using namespace std;
#define rt(n) return (n)
#define sz(n) n.size()
#define FOR(n, i) for (int i = 0; i < n; i++)
/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s)
{
    int jlh = 1;
    FOR(sz(s), i)
    if (s[i] >= 'A' && s[i] <= 'Z') jlh++;
    rt(jlh);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
