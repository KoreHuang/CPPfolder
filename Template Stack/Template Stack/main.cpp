//
//  main.cpp
//  Template Stack
//
//  Created by mac on 16/5/19.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T,int MAXSIZE>
class Stack_my{
    T data[MAXSIZE];
    int top;
public:
    Stack_my();
    void EnStack(T data);
    void PopStack(T &data);
    int IsEmpty();
};
 template <class T,int MAXSIZE>
Stack_my<T,MAXSIZE>::Stack_my(){
    top=0;
}
template<class T,int MAXSIZE>
void Stack_my<T, MAXSIZE>::EnStack(T data){
    if(top==MAXSIZE){
        cout<<"This stack is full!"<<endl;
        throw 0;
    }
    this->data[top++]=data;
    cout<<"Entrance succeed!"<<endl;
}
template <class T,int MAXSIZE>
void Stack_my<T, MAXSIZE>::PopStack(T &data){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    return 0;
}
