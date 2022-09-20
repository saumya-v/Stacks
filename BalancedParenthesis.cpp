#include<iostream>
#include<climits>
#include<stack>
using namespace std;
bool isBalanced(string expression){
    stack<char> stk;
    for(int i=0;i<expression.length();i++){
        if(expression[i]=='('){
            stk.push(expression[i]);
           }
        else if(expression[i]==')'){
            if(stk.empty()){
                return false;
            }
            char topchar=stk.top();
            stk.pop();
            if(expression[i]==')' && topchar=='('){
                continue;
            }
            else{
                return false;
            }
        }

    }
    return stk.empty();
}
int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
