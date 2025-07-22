#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number that converts to the multiplication table :";
    cin >>num;

    cout<<"0"<<" x "<<num<<" = "<<num*0<<endl;
    cout<<"1"<<" x "<<num<<" = "<<num*1<<endl;
    cout<<"2"<<" x "<<num<<" = "<<num*2<<endl;
    cout<<"3"<<" x "<<num<<" = "<<num*3<<endl;
    cout<<"4"<<" x "<<num<<" = "<<num*4<<endl;
    cout<<"5"<<" x "<<num<<" = "<<num*5<<endl;
    cout<<"6"<<" x "<<num<<" = "<<num*6<<endl;
    cout<<"7"<<" x "<<num<<" = "<<num*7<<endl;
    cout<<"8"<<" x "<<num<<" = "<<num*8<<endl;
    cout<<"9"<<" x "<<num<<" = "<<num*9<<endl;
    cout<<"10"<<" x "<<num<<" = "<<num*10<<endl;
    cout<<"11"<<" x "<<num<<" = "<<num*11<<endl;
    cout<<"12"<<" x "<<num<<" = "<<num*12<<endl;


cout << "------------------------------------------------------------------------------------------------\n";

   for (int i = 0; i <= 12; i++)
        cout << i << " * " << num << " = " << num * i << endl;

    return 0; 

}
