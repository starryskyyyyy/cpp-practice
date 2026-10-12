///使用递归函数求勒让德多项式
#include<iostream>
using namespace std;
double legendre(int n, double x) {
    if (n == 0) return 1;
    if (n == 1) return x;
    return ((2 * n - 1) * x * legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
}
int main() {
    int n;
    double x;
    cout << "please enter n and x:" << endl;
    cin >> n >> x;
    cout << "P_" << n << "(" << x << ") = " << legendre(n, x) << endl;
    return 0;
}