#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string num[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            (i % 2 == 0) ? cout << "even\n" : cout << "odd\n";
        }
        else
        {
            cout << num[i] << endl;
        }
    }
    return 0;
}
