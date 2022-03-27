#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << fixed;
    cout << i << '\n'
         << l << '\n'
         << c << '\n'
         << setprecision(3) << f << '\n';
    cout << setprecision(9) << d << '\n';
    return 0;
}