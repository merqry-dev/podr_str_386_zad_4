#include <iostream>

using namespace std;

float fun(float x)
{
    return x * x + x + 2;
}

float pole(float a, float b, float n)
{
    float suma = 0;
    float w = (b - a) / n;
    float srodek = a + (b - a) / (2 * n);

    for (int i = 0; i < n; i++)
    {
        suma += fun(srodek);
        srodek += w;
    }

    return suma * w;
}

int main()
{
    float a = 2;
    float b = 10;
    float n = 100;
    cout << pole(a, b, n) << endl;
}

