/*
    Que : Implementation of two stack in a dynamic array
*/

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        this->arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data)
    {
        // check overflow
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW !!!!";
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data)
    {
        // check overflow
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW!!!!"<<endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        // Check underflow
        if (top1 == -1)
        {
            cout << "UNDERFLOW!!!";
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        // Check underflow
        if (top2 == size)
        {
            cout << "UNDERFLOW!!!";
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        cout << "Top : " << top1 << endl;
        cout << "Top2 : " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " " << endl;
        }
    }
};

int main()
{
    Stack st(6);
    st.push1(90);
    st.push1(20);
    st.push1(10);
    st.push2(110);
    st.push2(100);
    st.push2(70);
    st.push2(220);
    st.print();

    return 0;
}