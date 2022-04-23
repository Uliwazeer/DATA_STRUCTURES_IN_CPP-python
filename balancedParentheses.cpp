#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool arePair(char open, char close){
    if(open == '('&&close == ')')
    return true;
    else if (open == '{'&&close == '}')
    return true;
    else if (open == '['&&close == ']')
    return true;
    return false;

}
bool areBalanced(string exp){
    stack<char>s;
    for(size_t i = 0; i < exp.length(); i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '{')
        s.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')

    }
    if (s.empty() || !arePair(s.top(),exp[i])){
    return false;
    else
    s.pop();
}
}
return s.empty()? true:false;
}
int main(){
        string expression;
        cout <<"Enter An Expression:";
        if(areBalanced(expression))
        cout << "This Is Balanced\n";
        else
        {
            cout << "This Is Not Balanced\n";
        }
}