#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // ctor
    queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    // push
    void push(int data)
    {
        // 1 step overflow
        if (rear == size - 1)
        {
            cout << "OVERFLOW !!!" << endl;
        }

        // check empty
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "UNDERFLOW!!!";
        }

        // empty or one element

        if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else
        {
            arr[front] = -1;
            front++;
        }
    }

    // empty
    bool empty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // size
    int getSize()
    {
        // bhul gya tha
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }
    //getRear
    int getRear()
    {
        if(front == -1)
        {
            cout<<"No element !!";
        }
        else
        {
            return arr[rear];
        }
    }
    // front
    int getfront()
    {
        if (front == -1)
        {
            cout << "No element !!";
        }
        else
        {
            return arr[front];
        }
    }

    // printing
    void print()
    {

        cout << "Front:" << front << " "
             << "Rear:" << rear << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    queue q(5);
    // q.push(30);
    // q.push(20);
    // q.push(40);
    // q.push(50);
    // q.push(55);

    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    q.print();
    cout << endl;
    
    cout<<q.getRear();
    cout<<endl;
    cout << "Size " << q.getSize();
    return 0;
}