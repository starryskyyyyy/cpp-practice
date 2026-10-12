//三个数从小到大输出
#include <iostream>
using namespace std;
int main() {
    int a[3],b;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    return 0;
}