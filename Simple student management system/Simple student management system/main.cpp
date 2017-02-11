//
//  main.cpp
//  Simple student management system
//
//  Created by mac on 16/5/28.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Data_rec{
protected:
    string name;
    char sex;
    int age;
public:
    Data_rec(string name1,char sex1,int age1):name(name1),sex(sex1),age(age1){}
    ~Data_rec(){}
    void print(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Employee:virtual public Data_rec{
protected:
    string dept;
    double salary;
public:
    Employee(string name1,char sex1,int age1,string dpt,double sal):Data_rec(name1,sex1,age1){
        dept=dpt;
        salary=sal;
    }
    ~Employee(){}
    void print(){
        Data_rec::print();
        cout<<"\tDept is:"<<dept<<endl;
        cout<<"\tSalary:"<<salary<<endl;
    }
};
class Student:virtual public Data_rec{
protected:
    string major;
    double score;
public:
    Student(string name1,char sex1,int age1,string maj,double scor):Data_rec(name1,sex1,age1){
        major=maj;
        score=scor;
    }
    ~Student(){}
    void print(){
        Data_rec::print();
        cout<<"\tMajor is:"<<major<<endl;
        cout<<"\tScore:"<<score<<endl;
    }
};

class Teacher:public Employee{
protected:
    string title;
public:
    Teacher(string name1,char sex1,int age1,string dpt,double sal,string title):Employee(name1,sex1,age1,dpt,sal),Data_rec(name1,sex1,age1){
        this->title=title;
    }
    ~Teacher(){}
    void print(){
        Employee::print();
        cout<<"\tTitle is:"<<title<<endl;
    }
};
class E_student:public Employee,public Student{
public:
    E_student(string name1,char sex1,int age1,string maj,double scor,string dpt,double sal):Data_rec(name1,sex1,age1),Employee(name1,sex1,age1,dpt,sal),Student(name1,sex1,age1,maj,scor){}
    ~E_student(){}
    void print(){
        Student::print();
        cout<<"\tDept is:"<<dept<<endl;
        cout<<"\tSalary:"<<salary<<endl;
        
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Student stu1("李小敏",'f',22,"应用数学",90);
    cout<<"Student:"<<endl;
    stu1.print();
    Employee emp("黄百松",'m',55,"科研处",5000);
    cout<<endl<<"Employee:"<<endl;
    emp.print();
    Teacher tchr("王世明",'m',50,"管理学院",8000,"教授");
    cout<<endl<<"Teacher:"<<endl;
    tchr.print();
    E_student estu("张大明",'m',35,"计算机",96,"教务处",3500);
    cout<<endl<<"E_student"<<endl;
    estu.print();
    return 0;
}
