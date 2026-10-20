#include <iostream>
#include <cmath>
using namespace std;

struct nrComplex
{
    double a, b;
};

template <typename T>
T absolute(T x)
{
    if (x >= 0)
        return x;
        else
        return -x;
}

double absolute(nrComplex x)
{
    double sum = x.a * x.a + x.b * x.b;
    return sqrt(sum);
}

int main()
{
    cout << absolute(-5) << endl; 

    nrComplex c = {3.0, 4.0};
    cout << absolute(c) << endl;

    c = {5.0, 9.0};
    cout << absolute(c) << endl;
    return 0;
}