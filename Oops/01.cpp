//Access modifier

#include<iostream>
using namespace std;

class student
{
    private:
    string bf;
    string gf;

    //Behaviour or method
    void chating()
    {
        cout<<"Chating"<<endl;
    }
    
    public:
    //property or state or attribute
    int id;
    string name;
    int age;
    string gendor;

    //Behaviour or method
    void eat()
    {
        cout<<"I am eating"<<endl;
    }

    void sleep()
    {
        cout<<"I am sleeping"<<endl;
    }

    void study()
    {
        cout<<"I am studing"<<endl;
    }

};
int main()
{
    student s1;
    s1.name = "Vipin G";
    s1.age = 24;
    s1.gendor = "Male";

    cout<<s1.name;
    s1.sleep();
    

    return 0;
}