#include <iostream>
#include <math.h>
using namespace std;
int rnd1(double n)
{
    return ceil(n);
}
int rnd2(double n)
{
    return int(n);
}
int main()
{
    double n;
    cin >> n;
    cout << rnd1(n) << endl;
    cout << rnd2(n);
    return 0;
}
