//
//  main.cpp
//  含有对象成员的派生类构造函数
//
//  Created by mac on 16/3/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Base{
private:
    int x;
public:
    Base(int value):x(value){
        cout<<"Constructing base object!"<<endl;
    }
    ~Base(){
        cout<<"Destructing base object!"<<endl;
    }
    void show(){
        cout<<"The value of x is:"<<x<<endl;
    }
};
class Derived:public Base{
private:
    Base d;
public:
    Derived(int x):Base(x),d(x){
        cout<<"Constructing derived object!"<<endl;
    }
    ~Derived(){
        cout<<"Destructing derived object!"<<endl;
    }
    
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Derived obj1(17);
    obj1.show();
    return 0;
}
