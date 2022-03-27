#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    int x = stoi(s.substr(6, 2));
    string amorpm = s.substr(8, 2);
    int hh, hh1, mm, ss;
    if (amorpm == "AM")
    {
        if (h < 12)
            hh1 = h;
        else
            hh1 = h - 12;
    }
    else
    {
        hh1 = h + 12;
        if (hh1 == 24)
        {
            hh1 -= 12;
        }
    }
    stringstream ss1;
    ss1 << setfill('0') << setw(2) << hh1 << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << x;
    return ss1.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
