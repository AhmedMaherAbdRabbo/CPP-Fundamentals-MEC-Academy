#include <iostream>

using namespace std;

class Employees
{
private:
    string name,address,gender,phone_number;
    int age,id;
public:
    Employees(string name = "unknown",string address= "unknown",string gender= "unknown",string phone_number= "0000000",int age=0,int id=0)
    {
        this->name=name;
        this->address=address;
        this->gender=gender;
        this->phone_number=phone_number;
        this->age=age;
        this->id=id;
    }


    void setAddress(string address)
    {
        this->address=address;
    }

    void setPhoneNumber(string newnumber)
    {
        this->phone_number=newnumber;
    }

    void setAge(int age)
    {
        this->age=age;
    }


    void display()
    {
        cout<<"your name is : "<<name<<endl
            <<"your address is : "<<address<<endl
            <<"your gender : "<<gender<<endl
            <<"your phone number is : "<<phone_number<<endl
            <<"your age is : "<<age<<endl
            <<"your id is : "<<id<<endl;
    }
};


class Customers
{
private:
    string name,address,phone_number,serialNumber;
public:
    Customers(string name = "unknown",string address= "unknown",string phone_number= "0000000",string serialNumber = "unknown")
    {
        this->name=name;
        this->address=address;
        this->phone_number=phone_number;
        this->serialNumber=serialNumber;
    }


    void setAddress(string address)
    {
        this->address=address;
    }

    void setPhoneNumber(string newnumber)
    {
        this->phone_number=newnumber;
    }


    void display()
    {
        cout<<"your name is : "<<name<<endl
            <<"your address is : "<<address<<endl
            <<"your phone number is : "<<phone_number<<endl
            <<"your serial Number is : "<<serialNumber<<endl;
    }
};



class products
{
private:
    string name,serialNumber;
    long long price;
public:
    products(string name = "unknown",string serialNumber = "unknown",long long price = 0)
    {
        this->name=name;
        this->price=price;
        this->serialNumber=serialNumber;
    }


    void setPrice(string price)
    {
        this->price=price;
    }




    void display()
    {
        cout<<"your name is : "<<name<<endl
            <<"your serialNumber is : "<<serialNumber<<endl
            <<"your price = "<<price<<endl;
    }
};






int main()
{

    return 0;
}
