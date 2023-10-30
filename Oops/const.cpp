#include<iostream>
using namespace std;

class student
{
   
   int x;
   int *y;

   public:

   //default ctor
   student()
   {
        x=0;
        y= new int(0);
   }

   void setX(int _x)
   {
       x=_x;
   }

   //yaha aap chahte ho ki data member ki value change na to method ko const declare kar do
   int getX() const
   {
    //we can't change the value ex:
    // x=20;
     return x;
   }

   void setY(int _y)
   {
     *y = _y;
   }
   
   //if we want to change the value of data member then we can change the value from here
   int getY()
   {
    int f=80;
    y=&f;
    return *y;
   }

};

int main()
{
    student s;
    cout<<s.getX()<<endl;
    cout<<s.getY()<<endl;
    return 0;
}

//Note=> agar aap chahate ho ki aapke data member kabhi change na ho to aap us varialbe ko const declare kar do 