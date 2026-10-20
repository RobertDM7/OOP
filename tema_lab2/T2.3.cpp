#include <iostream>

using namespace std;

template<typename T>
double solve(T a, T b)
{
    return (double)-b / a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    auto x = solve(a, b);
    cout << x << "\n";
    double ad, bd;
    cin >> ad >> bd;
    auto xd = solve(ad, bd);
    cout << xd << "\n";
    return 0;
}
