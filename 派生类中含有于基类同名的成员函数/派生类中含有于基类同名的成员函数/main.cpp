//
//  main.cpp
//  派生类中含有于基类同名的成员函数
//
//  Created by mac on 16/3/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Student{
protected:
    int num;
    float score;
    string name;
public:
    Student(int num,string name,float score){
        Student::name=name;
        Student::num=num;
        Student::score=score;
    }
    void show(){
        cout<<"Num:"<<num<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Score:"<<score<<endl;
    }
};
class Ustudent:public Student{
private:
    string major;
public:
    Ustudent(int num,string name,string major,float score):Student(num,name,score){
        Ustudent::major=major;
    }
    void show(){
        Student::show();
        cout<<"Major:"<<major<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Ustudent stu1(314,"Tom","Computer science",75);
    stu1.show();
    stu1.Student::show();
    return 0;
}
