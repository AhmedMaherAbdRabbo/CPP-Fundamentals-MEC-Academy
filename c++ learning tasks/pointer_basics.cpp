#include <iostream>

using namespace std;

int main()
{
    int * ptr ;
    int val = 5;
    ptr = &val;
    cout << "address " << ptr << endl;
    cout << "--------" << endl ;
    cout << "the value by ptr " << *ptr << endl;
    cout << "--------" << endl ;
    *ptr = 200;
    cout << "the change value by ptr " << endl ;
    cout << *ptr << endl ;
    cout << val  << endl ;
    cout << "--------" << endl ;

    return 0;
}
