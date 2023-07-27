#include<iostream>
#include<cmath>
using namespace std;
#include<iomanip>
int main()
{
    float a,b,c,d;
    cin >> a >>b;
    c = M_PI*pow(a,2);
    d = M_PI*pow((a-b),2);
    cout << fixed << setprecision(9) << (d/c)*100;
    return 0;
}
