//
//  main.cpp
//  实验2
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
//#include "student.cpp"
#include "student.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int number;
    char name[15];
    float scorei;
    
    cout<<"Enter number:\n";cin>>number;
    cout<<"Enter name:\n";cin>>name;
    cout<<"Enter score:\n";cin>>scorei;
    Student stu1(number, name, scorei);
    
    cout<<"Enter number:\n";cin>>number;
    cout<<"Enter name:\n";cin>>name;
    cout<<"Enter score:\n";cin>>scorei;
    Student stu2(number,name,scorei);
    stu2.Modify(87);
    
    stu1.print();
    stu2.print();
    return 0;
}
