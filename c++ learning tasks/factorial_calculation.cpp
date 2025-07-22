#include <iostream>

using namespace std;

int main()
{
    int num , fact = 1 ;
    cin >> num;
    if (num < 0 )
        cout << "Error";
    else if (num == 1)
        cout << num ;
    else {
        for(int i = 1; i <= num ; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << num << " = " << fact;
    }
    return 0 ;

}
