#include <iostream>

using namespace std;

int main()
{

    float fahr ,cel;
    cout << "Enter the temperature in Fahrenheit: \n";
    cin >> fahr;
    cel = (fahr - 32)* 5/9;
    cout << "the temperature in Celsius: \n" << cel;

    return 0;
}
