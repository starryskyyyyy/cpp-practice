#include <iostream>
#include <cmath>
using namespace std;

const double M_PI = 3.1415926;
typedef double funType(double);
double callFun(funType f, double r){
    return f(r);
}
auto circlePerimeter = [](double r){return 2 * M_PI * r;};
auto circleArea = [](double r){return M_PI * r * r;};
auto ballArea = [](double r){return 4 * M_PI * r * r;};
auto ballVolume = [](double r){return (4.0 / 3.0) * M_PI * r * r * r;};
int main(){
    double r;
    cin>>r;
    cout << callFun(circlePerimeter, r) << endl;
    cout << callFun(circleArea, r) << endl;
    cout << callFun(ballArea, r) << endl;
    cout << callFun(ballVolume, r) << endl;
    return 0;
}