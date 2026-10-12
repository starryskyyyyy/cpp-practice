//计算0到10整数的平方和立方，然后用制表符整齐格式显示数值表
#include <iostream>
using namespace std;
int main() {
    cout << "number\tsquare\tcube" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << "\t" << i * i << "\t" << i * i * i << endl;
    }
    return 0;
}