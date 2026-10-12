#include <iostream>
#include "Combination.h"
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of m and n: ";

    if(!(cin>>m>>n))
    {
        cout<<"Invalid input"<<endl;
        return 1;
    }
    if(m<0 || n<0 || m<n)
    {
        cout<<"m and n should be non-negative integers with m >= n"<<endl;
        return 1;
    }

    int result = Fabricate(m,n);

    if(result == -1)
    {
        cout<<"Error in calculation"<<endl;
        return 1;
    }
    cout<<"C("<<m<<","<<n<<") = "<<result<<endl;
    return 0;
}