#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* convertArrayToLinkedList(int arr[], int n)
{
    Node* head = new Node(arr[0]);

    Node* mover = head;

    for(int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);

        mover->next = temp;

        mover = temp;
    }

    return head;
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";

        head = head->next;
    }

    cout << endl;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    int n = sizeof(arr)/sizeof(arr[0]);

    Node* head = convertArrayToLinkedList(arr,n);

    print(head);

    return 0;
}