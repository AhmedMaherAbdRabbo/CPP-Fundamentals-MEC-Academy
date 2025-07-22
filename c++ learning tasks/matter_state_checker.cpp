#include <iostream>

using namespace std;

int main()
{

    float temp;
      cout << "enter temperature ";
      cin >> temp ;


   if ( temp >= 100)
      cout << " it   is a vapor " ;

   else if ( temp >= 0 && temp < 100)
      cout << "it is a liquid " ;

   else
      cout << "it is solid " ;

    return 0;

}
