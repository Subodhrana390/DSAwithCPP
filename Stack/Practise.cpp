#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;

    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        if (ch == '{' || ch == '(' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if (
                    (ch == ']' && top == '[') ||
                    (ch == ')' && top == '(') ||
                    (ch == '}' && top == '{'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
};

void solve(stack<int> &inputStack, int N)
{
    if (inputStack.empty())
    {
        inputStack.push(N);
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, N);
    inputStack.push(num);
}

stack<int> insertElementAtbottom(stack<int> &input, int N)
{
    solve(input, N);
    return input;
}

int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    cout << " Valid or not :" << isValidParenthesis("[{(}]") << endl;
    stack = insertElementAtbottom(stack, 5);
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
}
