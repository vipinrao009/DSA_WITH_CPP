#include<iostream>
using namespace std;

class person
{
    public:
    void walk()
    {
        cout<<"Walking......."<<endl;
    }
};

class teacher :virtual public person
{
    public:
    void teaching()
    {
        cout<<"Teaching........";
    }
};

class researcher :virtual  public person
{
    public:
    void research()
    {
        cout<<"Research........."<<endl;
    }
};

class professor : public teacher , public researcher
{
    public:
    void bore()
    {
        cout<<"Dimag kharab karata hai"<<endl;
    }
};

int main()
{
    professor p1;

    //Solution 1  => Scop Resolution
    // p1.teacher::walk();
    // p1.researcher::walk();

    //Solution 2 => Vertual funtion
    p1.walk();

    return 0;
}