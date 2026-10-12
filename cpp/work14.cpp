#include <iostream>
using namespace std;

double manx(double a, double b)
{
    return (a > b) ? a : b;
}

double minx(double a, double b)
{
    return (a < b) ? a : b;
}

typedef double functionType(double, double);

int main() {
    functionType *fp;
    fp = manx;
    cout << fp(5.5, 3.3) << endl;
    fp = minx;
    cout << fp(5.5, 3.3) << endl;
    return 0;
}