#include <bits/stdc++.h>

using namespace std;

int exponent1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return exponent1(m, n - 1) * m;
}

int exponent2(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return exponent2(m * m, n / 2);
    else
        return exponent2(m * m, (n - 1) / 2) * m;
}

int main()
{
    cout << exponent1(2, 5) << endl;
    cout << exponent2(2, 5) << endl;
    return 0;
}