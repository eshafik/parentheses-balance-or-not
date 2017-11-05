#include<iostream>
#include<stack>
using namespace std;
bool AreEqual(char open, char close){
    if(open=='(' && close==')' ) return true;
    else if(open=='{' && close=='}') return true;
    else if(open=='[' && close==']') return true;
    return false;
}
bool Balance(string c){
    stack<char>s;
    for(int i=0 ; i<c.size();i++){
        if(c[i]=='(' || c[i]=='{' ||c[i]=='['){
            s.push(c[i]);
           }
        else if(c[i]==')' || c[i]=='}' || c[i]==']'){
            if(s.empty() || !AreEqual(s.top(),c[i]) ) return false;
            else
               s.pop();
        }
    }
    return s.empty()?true:false;
}



int main(){
    string c;
    cin>>c;
    if(!Balance(c))
        cout<<"The parentheses is not balance"<<endl;
    else
        cout<<"The parentheses is balanced"<<endl;

}
