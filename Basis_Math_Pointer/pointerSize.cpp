// why pointer size was coming 8 while printing

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    char c = 'c';

    int *ptr = &a;
    char *ch = &c;

    cout <<sizeof(ptr);
    cout<<sizeof(ch);

}