#include <iostream>

using namespace std;

int main()
{

    char grade;

    cout << "Enter your grade: \n";
    cin >> grade;

    if (grade == 'A' || grade =='a')
       cout << "Excellent!";
    else if (grade == 'B' || grade =='b')
       cout << "Well done!";
    else if (grade == 'C' || grade =='c')
       cout << " Satisfactory";
    else if (grade == 'D' || grade =='d')
       cout << "Need to improve";
    else
       cout << "Failed";

return 0;
}
