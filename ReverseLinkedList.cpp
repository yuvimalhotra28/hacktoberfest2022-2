#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
            head = newnode;
        else
        {
            node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}
node *Reverse(node *head)
{
    //Base Condition
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    //Recursion Call
    node *smallAns = Reverse(head->next);
    //Small Calculations
    node *temp = smallAns;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallAns;
}
int main()
{
    node *head, *tail;
    head = takeInput();
    print(head);
    cout << endl;
    tail = Reverse(head);
    print(tail);
}
