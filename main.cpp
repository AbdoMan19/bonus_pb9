#include <iostream>
#include "Set.cpp"
using namespace std;
int main() {
    mySet<int> set(4);
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    cout<<set<<endl;
    set.insert(1);
    cout<<set<<endl;
    set.remove(2);
    cout << set<<endl;
    cout<<set.getSize()<<endl;
    cout<<set.getCapacity()<<endl;
    cout<<set[0]<<endl;
    cout<<set.find(3)<<endl;



    return 0;
}
