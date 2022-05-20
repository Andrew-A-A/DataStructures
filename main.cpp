#include <iostream>
#include "ArrStack.h"
#include "Linkedlist.cpp"
using namespace std;
// Function To Change Decimal into binary using ArrStack
void DecimalToBinary(int x){
    ArrStack b;
    while (x!=0){
        b.push(x%2);
        x/=2;
    }
    while (!b.isEmpty()){
        cout<<b.pop();
    }
}
// End of Binary Function
int main() {
    //ArrStack Test Start
//    ArrStack Andrew;
//    for (int i = 1; i < 20; ++i) {
//        Andrew.push(i);
//    }
//    for (int i = 1; i < 10; ++i) {
//        cout << Andrew.pop() << " ";
//    }
//    cout<<endl<<"Is Stack Empty ? : ";
//    if (Andrew.isEmpty())
//        cout<<"Yes";
//    else
//        cout<<"No";
    //ArrStack End
//---------------------------------------------------------------------------------------------------------------
    //'Decimal To Binary' function Test
//    cout<<"Enter Decimal Number : ";
//    int x; cin>>x;
//    cout<<x<<" in Binary equals : ";DecimalToBinary(x);
    //'Decimal To Binary' End
// =========================================================================================================================
  //Test LinkedList
  Linkedlist<int> ll;
    for (int i = 0; i < 11; ++i) {
        ll.Append(i);
    };
   ll.MoveNode(3,1);
   ll.Display();
   // End LinkedList
//========================================================================================================================
}


