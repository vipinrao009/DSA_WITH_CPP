#include<iostream>
using namespace std;

class Bird
{
   public:
   int age;
   int leg;
   string color;
   int weight;

   //method 
   void flying()
   {
    cout<<"Bird is flying";
   }

   void eating()
   {
    cout<<"Bird is eating";
   }
};

//jo bird hai vo use apna age , leg, weight batane me sharam aati hai expect color to aap kaise color ko access karenge agar bird ka base class private karenge 
// why private karenge :> kyuki bird ko age weight and leg batane me sharam aati hai that's why 
class parroat:private Bird
{ 
    public:
    parroat(int age,int leg,string color,int weight)
    {
        cout<<"Parroat C tor is called"<<endl;
        this->age = age;
        this->leg = leg;
        this->color = color;
        this->weight = weight;
    }
    //throgh getter function se ham access kar skate hai color ko
    
    string getColor()
    {
        return color;
    }
    void speaking()
    {
        cout<<"Parroat is speaking";
    }

};

class cow:protected Bird
{ 
    public:
    cow(int age,int leg,string color,int weight)
    {
        cout<<"Parroat C tor is called";
        this->age = age;
        this->leg = leg;
        this->color = color;
        this->weight = weight;
    }
    void Cowing()
    {
        cout<<"Cow is speaking";
    }

};

int main()
{
    parroat s1(20,2,"White",2);
    cout<<s1.getColor()<<endl;
    return 0;
}
