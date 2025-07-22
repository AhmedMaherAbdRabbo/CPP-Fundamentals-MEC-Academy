#include <iostream>

using namespace std;

int main()
{
     int num1,num2;

    cout << "Enter number #1 : \n";
    cin >> num1;
    cout << "Enter number #2 : \n";
    cin >> num2;

    if (num1 > num2)
        cout << "the bigger number is : " << num1 ;
    else
        cout << "the bigger number is : " << num2 ;

    return 0;
}
