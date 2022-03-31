#include <iostream>
#include <string>
using namespace std;

void printLen(string a, string b)
{
    cout << a.size() << " " << b.size() << endl;
}

void printAll(string a, string b)
{
    cout << a + b << endl;
}

void printLast(string a, string b)
{
    char first = a[0];
    a[0] = b[0];
    b[0] = first;
    cout << a << " " << b << endl;
}

int main()
{
    // Complete the program
    string a, b;
    cin >> a >> b;
    printLen(a, b);
    printAll(a, b);
    printLast(a, b);
    return 0;
}