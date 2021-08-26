#include<iostream>
using namespace std;


class Rectangle
{
    float length, width;

    public:
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
};

void Rectangle::setlength(float l)
{
    length = l;

}

void Rectangle::setwidth(float w)
{
    width = w;

}

float Rectangle::perimeter()
{
    return 2*(length + width);

}

float Rectangle::area()
{
    return length*width;

}

void Rectangle::show()
{
    cout<<"length: "<<length<<" ,width: "<<width<<endl;

}

int Rectangle::sameArea(Rectangle obj)
{
    float a1= length *width;
    float a2 = obj.length * obj.width;

    

    return a1 == a2;

    

}

int main()
{

    Rectangle r1,r2;

    r1.setlength(5);
    r1.setwidth(2.5);

    r2.setlength(5);
    r2.setwidth(18.9);

   float a1 = r1.area();
   float a2 = r2.area();

   float p1 = r1.perimeter();
   float p2 = r2.perimeter();

   cout << "Rectangle 1 : " << endl;
   r1.show();

   cout<<"area : "<<a1;

   cout <<"perimeter : "<<p1;



   cout<< "Rectangle 2 : "<<endl;
   r2.show();

   cout<<" area: "<<a2<<endl;
   cout<<" perimeter: "<<p2<<endl;

   if(r1.sameArea(r2))
   {
       cout<<"area is same."<<endl;

   }

   else
   cout<<"area is not same."<<endl;

    r1.setlength(15);
    r1.setwidth(6.3);

     cout << "Rectangle 1 : " << endl;
   r1.show();

   cout<<"area : "<<a1;

   cout <<"perimeter : "<<p1;



   cout<< "Rectangle 2 : "<<endl;
   r2.show();

   cout<<" area: "<<a2<<endl;
   cout<<" perimeter: "<<p2<<endl;

   if(r1.sameArea(r2))
   {
       cout<<"area is same."<<endl;

   }

   else
   cout<<"area is not same."<<endl;

   return 0;

}