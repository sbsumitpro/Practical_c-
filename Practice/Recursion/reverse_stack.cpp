#include<iostream>
#include<stack>
using namespace std;

void insertToBottom(stack<int>&stack, int topElm){
    if(stack.empty()){
        stack.push(topElm);
        return;
    }
    int tp = stack.top();
    stack.pop();
    insertToBottom(stack,topElm);
    stack.push(tp);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int topElm = stack.top();
    stack.pop();
    reverseStack(stack);
    insertToBottom(stack, topElm); 
} 

void printStack(stack<int> stack)
{
    while (!stack.empty()) {
      cout << stack.top() << " ";
      stack.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> stack;
    for(int i=1;i<=5;i++){
        stack.push(i);
    }

    printStack(stack);
    reverseStack(stack);
    printStack(stack);
    return 0;
}