#include<iostream>
using namespace std;

class cQueue
{
   public:
   int *arr;
   int size;
   int front;
   int rear;

   // ctor
   cQueue(int size)
   {
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
   }

   // push
   void push(int data)
   {
    //overflow
    if(front ==0 && rear == size-1)
    {
        cout<<"Overflow !!!";
    }

    //empty case
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        arr[rear] = data;
    }
    
    // circular condition
    else if(rear == size-1 && !front==0)
    {
        rear =0;
        arr[rear] = data;
    }

    //normal case
    else
    {
        rear++;
        arr[rear] = data;
    }
   }

   //pop
   void pop()
   {
    //underflow
    if(front==-1 && rear==-1)
    {
        cout<<"Underflow!!!";
    }
    else if(front==rear)
    {
        arr[front] =-1;
        front++;
    }
    else if(rear==size-1 && !front ==0)
    {
        
    }
   }
};