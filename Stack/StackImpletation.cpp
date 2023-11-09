#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    // ctor
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    // push
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow!!" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    // pop
    void pop()
    {
        top--;
    }

    // check empty
    void empty()
    {
        if (top == -1)
        {
            cout << "The stack is empty !!! " << endl;
        }
        else
        {
            cout << "The stack is not empty :)" << endl;
        }
    }

    // get top
    int topElement()
    {
        if (top == -1)
        {
            cout << "Stack is empty !!!" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // Size
    int getSize()
    {
        return top + 1;
    }

    // print
    void print()
    {
        cout << "Top " << top << endl;
        cout << "Top element : " <<topElement() << endl;
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl<<endl;
    }
};

int main()
{
    Stack st(8);
    

    st.push(10);
    st.print();

    st.push(39);
    st.print();

    st.push(33);
    st.print();

    st.push(44);
    st.print();

    st.push(55);
    st.print();

    st.pop();
    st.print();

    cout<<"Size of element : "<<st.getSize()<<endl;
    cout<<"Top element : "<<st.topElement()<<endl;

    st.empty();
    

    return 0;
}