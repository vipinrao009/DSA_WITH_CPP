#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() // Default ctor
    {
        cout << "Default ctor is called" << endl;
        this->next = NULL;
    }

    Node(int data) // Parameterized ctor
    {
        // cout << "Parameterized ctor is called"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    // Head ko kabhi change nhi hone dena hai
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert at head
void InsertAtHead(Node *&head, Node *&tail, int data)
{
    // Empty node
    if (head == NULL)
    {
        // create new node
        Node *newNode = new Node(data);

        // update the head
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step 01: create node
        Node *newNode = new Node(data);

        // attach newNode to head
        newNode->next = head;

        // update the head
        head = newNode;
    }
}

// Insert at tail
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    // Empty node
    if (head == NULL)
    {
        // 1. create node
        Node *newNode = new Node(data);
        // single node h entire list me
        // that's why head and tail ko isi par point kara do

        head = newNode;
        tail = newNode;
    }
    else
    {
        // Non-empty list
        // 1: create node
        Node *newNode = new Node(data);

        // 2: tail node ko attach kro newNode se
        tail->next = newNode;

        // 3: update tail
        tail = newNode;
    }
}

// Insert at Position
void InsertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    int length = findLength(head);
    if (position == 1)
    {
        InsertAtHead(head, tail, data);
    }
    else if (position == length + 1)
    {
        InsertAtTail(head, tail, data);
    }
    else
    {
        // Insert at middle
        //  1: create new node
        Node *newNode = new Node(data);

        // 2: traverse previous and current pointer
        Node *previous = NULL;
        Node *current = head;

        while (position != 1)
        {
            position--;
            previous = current;
            current = current->next;
        }
        // 3: attach previous node to newNode
        previous->next = newNode;
        // 4: attach newNode to current node
        newNode->next = current;
    }
}
// create tail
void createTail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        temp->next;
    }
    // jab ye vala loop khatam hoga tab aapka temp vala pointer last node par khada hoga
    // tab tail =temp karake tail ko last node par le aaao

    tail = temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 10);
    InsertAtTail(head, tail, 20);
    InsertAtTail(head, tail, 30);
    InsertAtTail(head, tail, 40);
    InsertAtTail(head, tail, 50);
    InsertAtPosition(head,tail,60,3);
    printLL(head);
    /*
    // Creation of node
    // Node a;     // static way of creation node

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // Initializing to the next pointer
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create head node
    Node *head = first;
    Node *tail = fifth;

    InsertAtTail(head, tail, 500);
    printLL(head);
    */
    return 0;
}

/*
    Line no 48 me pass by value pass kare head ke sath bhaiya ne galati ki thi
*/