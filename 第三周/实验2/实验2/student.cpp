//
//  student.cpp
//  实验2
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//
#include <iostream>
#include <cstring>
#include "student.hpp"
using namespace std;
Student::Student(int numberi,char *namei,float scorei){
    number=numberi;
    name=new char[strlen(namei)+1];
    strcpy(name, namei);
    score=scorei;
}
Student::~Student(){
    if(name!=NULL) delete []name;
}
//void Student::Modify(float nscore){
//   score=nscore;
//}
void Student::print(){
    cout<<"Number:"<<number<<" Name:"<<name<<" Score:"<<score<<endl;
}
