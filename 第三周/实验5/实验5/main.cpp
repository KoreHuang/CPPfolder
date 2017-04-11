//
//  main.cpp
//  实验5
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
/****************************************************/
class Score{
    float english;
    float mathematics;
    float computer;
public:
    Score(float x1, float y1, float z1);
    Score( );
    void print( );
    void modify(float x2, float y2, float z2);
};         //Score类的声明
Score::Score(){
    english=60;
    mathematics=60;
    computer=60;
}
Score::Score(float x1, float y1, float z1){
    computer=x1;
    english=y1;
    mathematics=z1;
}
void Score::modify(float x2, float y2, float z2){
    computer=x2;
    english=y2;
    mathematics=z2;
    
}
void Score::print(){
    cout<<"Computer:"<<computer<<endl;
    cout<<"English:"<<english<<endl;
    cout<<"Mathematics:"<<mathematics<<endl;
}
//Score类的定义
/***************************************************/

//Student类的定义
class Student{
private:
    int number;
    char *name;
    Score score;
public:
    Student(int numberi,char *namei,float x1, float y1, float z1);
    ~Student();
    void Modify(float x1, float y1, float z1){
        score.modify(x1, y1, z1);
    }
    void print();
};
Student::Student(int numberi,char *namei,float x1, float y1, float z1):score(x1,y1,z1){
    number=numberi;
    name=new char[strlen(namei)+1];
    strcpy(name, namei);
}
Student::~Student(){
    if(name!=NULL) delete []name;
}
void Student::print(){
    cout<<"NO.:"<<number<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"  *Score*"<<endl;
    score.print();
}
/************************************************/
int main(int argc, const char * argv[]) {
    // insert code here...
    Student stu1(06143047,"黄柯",100,100,100);
    stu1.print();
    return 0;
}
