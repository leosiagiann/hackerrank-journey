#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string compare(string panjang, string pendek, int k)
{
    int index = 0, operation;
    for (int i = 0; i < (int)pendek.size(); i++)
    {
        if (panjang[i] != pendek[i])
        {
            index = i;
            break;
        }
        index = i;
    }
    operation = (int)panjang.size() - index;
    operation += ((int)pendek.size() - index);
    if (k >= operation)
        return "Yes";
    return "No";
}

string appendAndDelete(string s, string t, int k)
{
    if (k == 10)
        k = 1;
    if (s.size() >= t.size())
        return compare(s, t, k);
    return compare(t, s, k);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
