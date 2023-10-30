#include<iostream>
using namespace std;

class Bird
{
   public:
   int age;
   int weight;
   string color;
   int nol;

   //Method
    void eat()
    {
        cout<<"Eating"<<endl;
    }

    void fly()
    {
        cout<<"Bird is flying"<<endl;
    }
};

class sparrow:public Bird
{
    public:

    sparrow(int age, int weight, string color, int nol)
    {
        cout<<"sparrow ctor is called";
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->nol = nol;
    }
    void grassing()
    {
        cout<<"Sparrow is grassing"<<endl;
    }
};

class pigeon:public Bird
{
    public:
    void guttering()
    {
        cout<<"pigeon is guttering"<<endl;
    }
};
int main()
{
    sparrow s(2,2,"RED",2);
    cout<<endl<<s.color;
    pigeon p;
    
    return 0;
}