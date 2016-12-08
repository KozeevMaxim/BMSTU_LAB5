#include <iostream>
using namespace std;

double sum(float a, float b)
{
    return a + b;
}

double sub(float a, float b)
{
    return a - b;
}

double mult(float a, float b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a + b = " << sum(a, b) << endl;
    cout << "a - b = " << sub(a, b) << endl;
    cout << "a * b = " << mult(a, b) << endl;
    return 0;
}