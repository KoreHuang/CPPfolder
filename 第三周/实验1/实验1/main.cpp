//
//  main.cpp
//  实验1
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class counter{
    int value;
public:
    counter(int number);
    void increment();
    void decrement();
    int getvalue();
    void print();
};
counter::counter(int number){
    value=number;
}
void counter::increment(){
    value++;
}
void counter::decrement(){
    value--;
}
int counter::getvalue(){
    return value;
}
void counter::print(){
    cout<<value<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    counter a(0);
    a.increment();
    a.increment();
    a.increment();
    a.decrement();
    cout<<a.getvalue()<<endl;
    a.increment();
    a.print();
    return 0;
}
