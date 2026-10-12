//求四个数的总和，平均，最大值，最小值
#include <iostream>
using namespace std;
int main() {
    int a[4];
    double average;
    int sum,min,max;
    for (int i = 0; i < 4; i++) {
        cout<< "Enter value for a[" << i << "]: ";
        cin >> a[i];
    }
    sum= a[0] + a[1] + a[2] + a[3];
    average= double(sum) / 4;
    for (int i=0; i < 4; i++) {
        if (i == 0) {
            min = a[i];
            max = a[i];
        } else {
            if (a[i] < min) {
                min = a[i];
            }
            if (a[i] > max) {
                max = a[i];
            }
        }
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    return 0;
}