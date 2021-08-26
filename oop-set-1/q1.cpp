#include<iostream>

using namespace std;

class Student
{
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal()
    {
        return eng + math + science;
    }

    public:
    void Takedata();
    void Showdata();
};

void Student::Takedata()
{
    cout<<"Enter admno: "<<endl;
    cin>>admno;
    cout<<"Sname: "<<endl;
    cin>>sname;
    cout<<"eng: "<<endl;
    cin>>eng;
    cout<<"science :"<<endl;
    cin>>science;
    cout<<"math :"<<endl;
    cin>>math;

    total = ctotal();

}

void Student::Showdata()
{
    cout<<"admno: "<<admno<<endl;
    cout<<"sname: "<<sname<<endl;
    cout<<"eng: "<<eng<<endl;
    cout<<"science: "<<science<<endl;
    cout<<"math: "<<math<<endl;
    cout<<"Total: "<<total<<endl;    
}

int main()
{
    Student irsa;
    irsa.Takedata();
    irsa.Showdata();
}



