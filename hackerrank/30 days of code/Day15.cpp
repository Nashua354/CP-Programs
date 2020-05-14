#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
    Node *insert(Node *head, int data)
    {
        //Complete this method
        Node *newNode = new Node(data);
        Node *last = head;
        if (head == NULL)
        {
            head = newNode;
            return head;
        }

        /* 5. Else traverse till the last node */
        while (last->next != NULL)
            last = last->next;

        /* 6. Change the next of last node */
        last->next = newNode;

        //head = newNode;
        return head;
    }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}