#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        next=nullptr;
        data=0;
    }
    Node(int d, Node* a)
    {
        data=d;
        next=a;
    }
};
class Stack
{
public:
    Node* top;
    Stack()
    {
        top=nullptr;
    }
    Stack(int a)
    {
        top=new Node(a,nullptr);
    }
    bool is_empty()
    {
        if(top==nullptr)
            return 1;
        return 0;
    }
    void push(int a)
    {
        if(is_empty()==1)
        {
            top= new Node(a,nullptr);
        }
        else
        {
            Node* n_node=new Node(a,nullptr);
            n_node->next=top;
            top=n_node;
        }
    }
    void pop()
    {
        if(is_empty()==1)
            cout<<"stack is empty\n";
        else
        {
            Node* temp= top;
            top=top->next;
            delete temp;
        }
    }
    void print()
    {
        Node* c=top;
        if(is_empty()==1)
            cout<<"stack is empty\n";
        else
        {
            while(c!=nullptr)
            {
                cout<<c->data<<" ";
                c=c->next;
            }
            cout<<endl;
        }
    }
    
};
int main()
{

    Stack a(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    a.pop();
    a.print();
    
    return 0;
}
