#include <iostream>
#include <string>
using namespace std;

int verifytype(string x)
{
    int size = x.size();
    for (int i = 0; i < size; i++)
        if (x[i] == '.')
            return 2;
            else
        if (x[i] - '0' < 0 || x[i] - '0' > 9)
            return -1;
    return 1;
}
template <typename T>
T computearea(T l)
{
    return l * l;
}

template <typename T>
T areacalculator(T l, T (*functiontocomputearea)(T))
{
    T sum;
    sum = functiontocomputearea(l);
    return sum;
}


int main()
{
    string l;
    cin >> l;
    int ok = verifytype(l);
    if(ok == -1)
    {
        cout << "Not an integer\n";
        return 0;
    }
    else if (ok == 1)
        {
            int latura = stoi(l);
            cout << areacalculator(latura, computearea) << endl;
        }
        else
            {
                float latura = stof(l);
                cout << areacalculator(latura, computearea) << endl;
            }
    
    return 0;
}