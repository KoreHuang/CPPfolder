//
//  main.cpp
//  友元函数
//
//  Created by mac on 16/3/17.
//  Copyright © 2016年 mac. All rights reserved.

//类的主要特点之一是实现信息的隐藏和封装，即类的私有成员只能在类定义的范围内使用，外部程序只能通过成员函数访问私有成员
//友元函数不是当前类的成员函数，而是独立于当前类的外部函数，它可以访问当前类的所有成员，包括私有成员，保护成员和公有成员
//友元函数可以在类的内部定义，也可以定义在类的外部
//友元是一扇外界同往类内部访问私有(受保护)成员的后门
//

#include <iostream>
#include <string>
using namespace std;
class Girl{
private:
    char *name;
    int age;
public:
    Girl(char *namei,int agei){
        name=new char[strlen(namei)+1];
        strcpy(name, namei);
        age=agei;
    }
    friend void disp(Girl &x);
    ~Girl(){
        delete [] name;
    }
};
void disp(Girl &x){
    cout<<"这个女孩的姓名是:"<<x.name<<",年龄："<<x.age<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Girl g("Kitty",18);
    disp(g);
    return 0;
}
