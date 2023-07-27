#include<iostream>
#include<cmath>
using namespace std;
#include<iomanip>
int main()
{
    long double a;
    cin >> a;
    cout << setprecision(15) << 4*sqrt(a);
    return 0;
}
