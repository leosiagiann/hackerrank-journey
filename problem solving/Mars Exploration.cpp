#include <bits/stdc++.h>

using namespace std;
#define FOR(n, i) for (int i = 0; i < n; i++)
#define rt(n) return (n)
#define sz(n) n.size()
/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s)
{
    int ho = 1;
    int jlh = 0;
    for (int i = 0; i < sz(s); i++)
    {
        if (i == ho)
        {
            (s[i] == 'O') ? jlh += 0 : jlh++;
            ho += 3;
        }
        else
        {
            (s[i] == 'S') ? jlh += 0 : jlh++;
        }
    }
    rt(jlh);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
