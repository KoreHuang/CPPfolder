//
//  main.cpp
//  派生类构造函数析构函数执行顺序
//
//  Created by mac on 16/3/20.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Base{
public:
    Base(){
        cout<<"Constructing base class"<<endl;
    };
    ~Base(){
        cout<<"Destructing base class"<<endl;
    }
};
class Derived:public Base{
public:
    Derived(){
        cout<<"Constructing Derived class"<<endl;
    }
    ~Derived(){
        cout<<"Destructing Derived class"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Derived obj1;
    return 0;
}
