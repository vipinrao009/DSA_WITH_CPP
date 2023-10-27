#include<iostream>
using namespace std;

class student1
{
  double a;
  double b;
  char c;
};

class student 
{
   int a;
   int b;
   bool c;

};
class student2
{
  double a;
  double b;
  char c;
  bool d;
};

int main()
{
    cout<<sizeof(student)<<endl; // o/p => 12 why
    cout<<sizeof(student1)<<endl;
    cout<<sizeof(student2)<<endl;
    return 0;
}

//the o/p should be 9 but the o/p is 12 why???

//if u have to know then refer  the note
