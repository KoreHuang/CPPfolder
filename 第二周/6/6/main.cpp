//
//  main.cpp
//  6
//
//  Created by mac on 16/3/16.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class counter{
private:
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
    counter cnt(0);
    cnt.increment();
    cnt.print();
    cnt.decrement();
    cnt.print();
    int count=cnt.getvalue();
    cout<<count<<endl;
    return 0;
}
