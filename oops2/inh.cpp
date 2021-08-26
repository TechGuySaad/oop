#include<iostream>

using namespace std;

class test{
    string f,l;

    public:

    test(string first = "", string last = "")
    {
        f = first;
        l = last;
    }

    void print()
    {
        cout << f<<" "<<l;
    }


};

int main()
{
    test name("saad","rahman");

    name.print();


}