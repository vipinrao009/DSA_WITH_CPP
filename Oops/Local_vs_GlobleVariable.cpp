#include <iostream>
using namespace std;

int x = 20; // GLOBLE VARIABLE

void fun()
{
    int x = 7;
    ::x=80; // changed globle variable 
    cout << "Fun_Local variable:" << x << endl;
    cout << "Fun_Globle variable:" << ::x << endl;
}

int main()
{
    x = 4;     // here is the changed globle variable
    int x = 2; // local variable
    cout << "Local variable:" << x << endl;
    cout << "Globle variable:" << ::x << endl; // Accessing globle variable with ::

    {
        int x = 50;
        cout << "Most local variable:" << x<<endl;
        // u can also access the globle variable frome here
    }

    // u can also print the globle variable through the function 
    fun();
    
    return 0;
}
