#include <iostream>

using namespace std;

int main()
{
  int num ;
  cout << " Enter number \n";
  cin >> num;
  if (num < 0)
    num *= -1;
  cout << " the positive number is " << num ;
    return 0;
}
