//
//  main.cpp
//  作业1
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class student{
private:
    int no;
    int class_no;
    char *name;
    int grade;
public:
    student(int no,int class_no,char *name,int grade);
    ~student(){
        if(name!=NULL){
            delete name;
        }
    }
    void show(){
        cout<<"学生:"<<name<<endl;
        cout<<"学号:"<<no<<endl;
        cout<<"班级:"<<class_no<<endl;
        cout<<"成绩:"<<grade<<endl;
    }
    void Modify(int ch_gras){
        grade=ch_gras;
    }
};
student::student(int no,int class_no,char *name,int grade){
    student::no=no;
    student::class_no=class_no;
    student::name=new char[strlen(name)+1];
    strcpy(student::name, name);
    student::grade=grade;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    student stu[5]={
        student(1, 1403, "Tom", 78),
        student(2, 1403, "Mik", 80),
        student(3, 1403, "Gre", 98),
        student(4, 1403, "Ley", 86),
        student(5, 1403, "Kit", 90),
    };
    for (int i=0; i<5; i++) {
        stu[i].show();
    }
    for (int j=0; j<5; j++) {
        (stu+j)->show();
    }
    return 0;
}
