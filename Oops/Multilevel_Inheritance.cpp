#include<iostream>
using namespace std;

class teacher
{
    public:
    void teaching()
    {
        cout<<"Teaching........";
    }
};

class researcher
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
    p1.research();
    p1.teaching();
    return 0;
}