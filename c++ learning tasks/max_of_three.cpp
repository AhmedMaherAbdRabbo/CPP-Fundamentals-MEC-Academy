#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;

    cout << "Enter number #1 : \n";
    cin >> num1;
    cout << "Enter number #2 : \n";
    cin >> num2;
    cout << "Enter number #3 : \n";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
        cout << "the bigger number is : " << num1 ;
    else if (num1 < num2 && num3 < num2)
        cout << "the bigger number is : " << num2 ;
    else
        cout << "the bigger number is : " << num3 ;
    return 0;
}
