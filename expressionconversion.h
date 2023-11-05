#pragma once
#include <iostream>
#include <cstring>
using namespace std;
#include <stack>

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string s)
{

    stack<char> st;
    string result;
    for (int i = 0; i < s.length(); i++) 
    {
        char c = s[i];
        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')|| (c >= '0' && c <= '9'))
            result += c;
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');
        // If the scanned character is an ‘)’,
        // pop and add to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')')
        {
            while (st.top() != '(') 
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        // If an operator is scanned
        else 
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top())) 
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << result << endl;
    return result;
}
bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}


string infixToPrefix(string infix)
{
    // Reverse String and replace ( with ) and vice versa
    // Get Postfix
    // Reverse Postfix
    int l = infix.size();
    // Reverse infix
    reverse(infix.begin(), infix.end());
    // Replace ( with ) and vice versa
    for (int i = 0; i < l; i++) {

        if (infix[i] == '(')
        {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }
    string prefix = infixToPostfix(infix);
    // Reverse postfix
    reverse(prefix.begin(), prefix.end());
    return prefix;
}

