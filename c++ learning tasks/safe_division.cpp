#include <iostream>

using namespace std;

int main()
{
    int num1,num2,result;

    cout << "Enter number #1 : \n";
    cin >> num1;
    cout << "Enter number #2 : \n";
    cin >> num2;

    if (num2 == 0)
        cout << "the result unknown";
    else
        cout << "the result = " << num1 / num2 ;

    return 0;
}
