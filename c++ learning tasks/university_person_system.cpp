#include <iostream>
#include <string.h>
using namespace std;

class person
{
private:
    string name,address,gender,phone_number;
    int age,id;
public:
    person(string name = "unknown",string address= "unknown",string gender= "unknown",string phone_number= "0000000",int age=0,int id=0)
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


class Students : public person
{
private:
    int semester;
    double gpa;
    static int cnt;
public:
    Students(string name,string address,string gender,string phone_number,int age,int id,double gpa = 0, int semester= 0)
        :person(name,address,gender,phone_number,age,id)
    {
        this->gpa=gpa;
        this->semester=semester;
        cnt++;
    }


    void setGpa(double gpa)
    {
        this->gpa=gpa;
    }
    double getGpa ()
    {
        return gpa;
    }


    void setSemester(int semester)
    {
        this->semester=semester;
    }
    int getSemester()
    {
        return semester ;
    }


    int getCount()
    {
        return cnt ;
    }



    void display()
    {
        person ::display();
        cout<<"your Gpa = "<<gpa<<endl
            <<"your are in class room : "<<semester<<endl;
    }
};



class teachers: public person
{
private :
    string specialization;
    int numOfClasses;
    double salary;
    static int cnt;
public:
    teachers(string name,string address,string gender,string phone_number,int age,int id,string specialization,  int numOfClasses, double salary )
        : person (name,address,gender,phone_number,age,id)
    {
        this->specialization=specialization;
        this->numOfClasses=numOfClasses;
        this->salary=salary;
        cnt++;
    }

    void setNumOfClasses(int num)
    {
        this->numOfClasses=num;
    }
    int getNumOfClasses()
    {
        return numOfClasses;
    }


    void setsalary(double salary)
    {
        this->salary=salary;
    }

    double getSalary ()
    {
        return salary;
    }


    int getCount()
    {
        return cnt ;
    }


    void display()
    {
        person ::display();
        cout<<"your specialization : "<<specialization<<endl
            <<"your number of classes : "<<numOfClasses<<endl
            <<"your salary : " <<salary<<endl;
    }
};

int Students :: cnt = 0;
int teachers :: cnt = 0;

int main()
{
    while (true)
    {

        cout << "chiose" << endl;
        cout << "#1 Open subject" << endl
             << "#2 check acount" << endl
             << "#3 Edite data member" <<endl
             << "#4 Exite"<<endl;

        int choise ;
        cout << "enter your choise from 1 to 4 " << endl;
        cin >> choise;

        if (choise == 4)
        {
            cout << "Thanks !!" << endl ;
            break ;
        }

        bool flag = true;
        switch(flag==true)
        {

        case 1:
            cout<<"Open subject \nEnter  if you Teacher or Student"<<endl;
            string test;

            for(int i=0; i < 3; i++)
            {
                cin>>test;
                if(test=="teacher"||test=="Teacher")
                {
                    cout<<"Enter the number of Teachers  "<<endl;
                    break;
                }
                else if(test=="student"||test=="Student")
                {
                    cout<<"Enter the number of Students  "<<endl;
                    break;
                }
                else
                {
                    cout<<"Error!!\nEnter  if you Teacher or Student"<<endl;
                }

            }

            int x,id;
            cin>>x;
            for(int i=1; i<=x; i++)
            {
                if(test=="student"||test=="Student")
                {
                    cout<<"Enter the data student : "<<i<<endl;
                    string name,address,gender, phone_number;
                    int age,semester;
                    double gpa;
                    cout<<"Enter your name "<<endl;
                    cin>>name;
                    cout<<"Enter your address "<<endl;
                    cin>>address;
                    cout<<"Enter your gender "<<endl;
                    cin>>gender;
                    cout<<"Enter your phone "<<endl;
                    cin>> phone_number;
                    cout<<"Enter your age "<<endl;
                    cin>>age;
                    cout<<"Enter your id "<<endl;
                    cin>>id;
                    cout<<"Enter your GPA "<<endl;
                    cin>>gpa;
                    cout<<"Enter your semester "<<endl;
                    cin>>semester;
                    cout<<endl;
                    Students s1(name,address,gender,phone_number,age,id,gpa,semester);
                    s1.display();
                    cout<<endl;
                }
                else if(test=="teacher"||test=="Teacher")
                {
                    cout<<"Enter the data teacher : "<<i<<endl;
                    string name,address,gender, phone_number;
                    int age;
                    string specialization;
                    int numOfClasses;
                    double salary;
                    cout<<"Enter your name "<<endl;
                    cin>>name;
                    cout<<"Enter your address "<<endl;
                    cin>>address;
                    cout<<"Enter your gender "<<endl;
                    cin>>gender;
                    cout<<"Enter your phone "<<endl;
                    cin>> phone_number;
                    cout<<"Enter your age "<<endl;
                    cin>>age;
                    cout<<"Enter your id "<<endl;
                    cin>>id;
                    cout<<"Enter your specialization"<<endl;
                    cin>>specialization;
                    cout<<"Enter your salary"<<endl;
                    cin>>salary;
                    cout<<"Enter your number of classes"<<endl;
                    cin>>numOfClasses;
                    teachers t1(name,address,gender,phone_number,age,id,specialization,numOfClasses,salary);
                    cout<<endl;
                    t1.display();
                    cout<<endl;
                }
                else
                {
                    cout<<"Erorr"<<endl;
                }
            }
            break;
        }
    }
    return 0;
}
