//
//  main.cpp
//  4
//
//  Created by mac on 16/4/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
const int SIZE=90;
template <typename type>
class Stack{
    type stack[SIZE];
    int tos;
public:
    Stack();
    ~Stack(){};
    void push(type data);
    type pop();
};
template <typename type>
Stack<type>::Stack(){
    tos=0;
}
template <class type>
void Stack<type>::push(type data){
    if(tos!=SIZE){
        stack[tos++]=data;
    }else{
        cout<<"Stack Full!"<<endl;
    }
}
template <class type>
type Stack<type>::pop(){
    if(tos==0){
        cout<<"Stcak empty!"<<endl;
        exit(0);
    }
    return stack[--tos];
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Stack<int> stack1;
    stack1.push(5);
    cout<<stack1.pop()<<endl;
    //stack1.pop();
    Stack<double> stack2;
    stack2.push(8);
    cout<<stack2.pop()<<endl;
    stack2.pop();
    
    return 0;
}
