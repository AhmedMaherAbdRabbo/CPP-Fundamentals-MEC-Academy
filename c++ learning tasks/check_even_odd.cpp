#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter positive number \n";
    cin >> num ;
    if (num % 2 ==0)
        cout << "the number is Even";
    else
        cout << "the number is Odd";
    return 0;
}
