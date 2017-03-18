//
//  main.cpp
//  派生类构造函数构造规则
//
//  Created by mac on 16/3/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
class Score{
private:
    float math;
    float english;
    float computer;
public:
    Score(float math,float english,float computer){
        Score::math=math;
        Score::english=english;
        Score::computer=computer;
    }
    ~Score(){
        cout<<"****Destructing subobject****"<<endl;
    };
    void print(){
        cout<<"Math:"<<math<<endl;
        cout<<"English:"<<english<<endl;
        cout<<"Computer:"<<computer<<endl;
    }
    
};
class Student{
private:
    int age;
    int number;
    string name;
    Score score;
public:
    Student(int numeri,int agei,string namei,float math,float english,float computer):number(numeri),age(agei),name(namei),score(math,english,computer){}
    ~Student(){
        cout<<"****Destructing base object****"<<endl;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Number:"<<number<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void printlist(){
        score.print();
    }
};
class UStudent:public Student{
private:
    string major;
public:
    UStudent(int numeri,int agei,string namei,string majori,float math,float english,float computer):Student(numeri,agei,namei,math,english,computer){
        major=majori;
    }
    ~UStudent(){
        cout<<"****Destructing derived****"<<endl;
    }
    void show(){
        Student::show();
        cout<<"Major:"<<major<<endl;
        Student::printlist();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    UStudent stu1(06143047,19,"Steve_ke","Computer science",89,78,99);
    stu1.show();
    return 0;
}
