#include<iostream>
#include<stack>
using namespace std;
bool balance_is_balance(string exp)
{
    stack<char> stk;
    char x;
    for (int i = 0; i < exp.length(); i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            stk.push(exp[i]);
            continue;
        }
        if (stk.empty())
        {
            return false;
        }
        switch(exp[i])
        {
            case ')':
             x=stk.top();
             stk.pop();
             if (x=='['||x=='{')
             {
                 return false;
             }
             break;
             case '}':
             x=stk.top();
             stk.pop();
             if (x=='['||x=='(')
             {
                 return false;
             }
             break;
             case ']':
             x=stk.top();
             stk.pop();
             if (x=='{'||x=='(')
             {
                 return false;
             }
             
             break;
        }
        
    }
    return (stk.empty());
    
}
int main()
{
    string expression;
    cout<<"Enter the expression"<<endl;
    cin>>expression;
    if (balance_is_balance(expression))
    {
        cout<<"The expression is balanced";
    }
    else
    {
        cout<<"The expression is not balanced";
    }
    
    return 0;
}