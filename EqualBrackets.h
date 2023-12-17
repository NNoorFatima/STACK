#include <iostream>
#include <string>
using namespace std;
template <class T>
class Node
{
    public:
    T data;
    Node<T>* next;
    Node()
    {
        next=nullptr;
        data=0;
    }
    Node(T d, Node<T>* a)
    {
        data=d;
        next=a;
    }
};
template <class T>
class Stack
{
public:
    Node<T>* top;
    Stack()
    {
        top=nullptr;
    }
    Stack(int a)
    {
        top=new Node<T>(a,nullptr);
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
            top= new Node<T>(a,nullptr);
        }
        else
        {
            Node<T>* n_node=new Node<T>(a,nullptr);
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
            Node<T>* temp= top;
            top=top->next;
            delete temp;
        }
    }
    void print()
    {
        Node<T>* c=top;
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
    T peek()
    {
        return top->data;
    }
    
};
bool areBracketsBalanced(string expr)
{
    Stack<char> brackets;
    int len=0;
    while(expr[len]!='\0')
        len++;
    for(int i=0; i<len;i++)
    {
        if(brackets.is_empty()==1)
        {
            brackets.push(expr[i]);
        }
        else if(brackets.peek()=='('&& expr[i]==')'  || brackets.peek()=='['&& expr[i]==']' ||brackets.peek()=='{'&& expr[i]=='}'  )
        {
            brackets.pop();
        }
        else
        {
            brackets.push(expr[i]);
        }
    }
    
    if(brackets.is_empty()==1)
        return 1;
    return 0;
}
int main()
{
    string ab="{[{(){}}]}";
    cout<<areBracketsBalanced(ab);
    return 0;
}
