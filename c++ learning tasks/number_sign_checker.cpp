#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << " Enter a number: \n";
    cin >> num;

    if (num > 0)
        cout << num << " is a positive number \n";
    else if(num < 0)
        cout << num << " is a negative number \n";
    else
        cout << "the number = Zero";
  return 0;
}