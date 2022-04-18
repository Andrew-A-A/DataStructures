#include <iostream>
#include "ArrStack.h"
using namespace std;
int main() {
    //ArrStack Test Start
    ArrStack Andrew;
    for (int i = 1; i < 20; ++i) {
        Andrew.push(i);
    }
    for (int i = 1; i < 10; ++i) {
        cout << Andrew.pop() << " ";
    }
    cout<<endl<<"Is Stack Empty ? : ";
    if (Andrew.isEmpty())
        cout<<"Yes";
    else
        cout<<"No";
    //ArrStack End
}

