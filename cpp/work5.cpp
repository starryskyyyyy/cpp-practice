//输出小于结果50000正整数的阶乘值
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    double a = 1;
    while (a < 50000) {
        cout << i << "! = " << a << endl;
        i++;
        a*= i;
    }
    return 0;
}