#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() // Default ctor
    {
        cout << "Default ctor is called"<<endl;
        this->next = NULL;
    }

    Node(int data) // Parameterized ctor
    {
        //cout << "Parameterized ctor is called"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node*head)
{
    //Head ko kabhi change nhi hone dena hai
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main()
{
    // Creation of node
    // Node a;     // static way of creation node

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    
    //Initializing to the next pointer
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    
    //Create head node
    Node *head = first;
    printLL(head);
    return 0;
}