#include<iostream>
using namespace std;

class add
{
    int a;
    int b;

    public:
    // void setdata(int x, int y)
    // {
    //     // this->a = x;
    //     // this->b = y;
    // }

    // init list
    add(int x,int y) : a(x) , b(y) {}


    //Function overloading
    //Addition
    void operator+(const add&src)
    {
        //this would point to a
        // src would be reference to b
        this->a += src.a;
        this->b += src.b; 
    }

    //Substraction
    void operator-(const add&src)
    {
        //this would point to a
        // src would be reference to b
        this->a -= src.a;
        this->b -= src.b; 
    }

    // postincrement
    void operator++()
    {
        this->a++;
        this->b++;
    }

    void getdata()
    {
        cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
    }
};
int main()
{
    add a(2,3);
    add b(4,6);

   //Addition
   // a+b;
   //a.getdata();

   //Substraction
    // a-b;
    // a.getdata();

    ++a;
    a.getdata();

    
    return 0;
}