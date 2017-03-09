//
//  main.cpp
//  实验4
//
//  Created by mac on 16/5/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student{
private:
    int number;
    string name;
    int score;
public:
    Student(int nu=0,string Nm="noname",int score1=0);
    void modify(int newscore){
        score=newscore;
    }
    ~Student(){}
    friend ostream &operator<<(ostream &out,Student &stu){
        out<<stu.number<<" "<<stu.name<<" "<<stu.score;
        return out;
    }
    friend istream &operator>>(istream &in,Student &stu){
        in>>stu.number>>stu.name>>stu.score;
        return in;
    }
};
Student::Student(int nu,string Nm,int score1){
    number=nu;
    name=Nm;
    score=score1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Student stu1,stu2(25,"ZhangSan",88);
    ofstream fout("student.dat",ios::binary);
    if(!fout){
        cout<<"Open fail!"<<endl;
        return 1;
    }
    fout.write((char*)&stu2, sizeof(stu2));
    fout.close();
    ifstream fin("student.dat",ios::binary);
    if(!fin){
        cout<<"Open fail!"<<endl;
        return 1;
    }
    fin.read((char*)&stu1, sizeof(stu1));
    cout<<stu1<<endl;
    cout<<stu2<<endl;
    fin.close();
    return 0;
}
