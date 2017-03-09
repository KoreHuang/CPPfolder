//
//  main.cpp
//  11.5
//
//  Created by mac on 16/5/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    int number;
    string name;
    float score;
public:
    Student(int number1=0,string name1="noname",int score1=0);
    void modify(int nscore){
        score=nscore;
    }
    friend istream &operator>>(istream &input,Student &stu){
        cout<<"Please input a student's number,name and score:\n";
        input>>stu.number>>stu.name>>stu.score;
        return input;
    }
    friend ostream &operator<<(ostream &output,Student &stu){
        output<<"Number:"<<stu.number<<" Name:"<<stu.name<<" Score:"<<stu.score;
        return output;
    }
};
Student::Student(int number1,string name1,int score1){
    name=name1;
    number=number1;
    score=score1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Student stu1;
    cout<<stu1<<endl;
    cin>>stu1;
    cout<<stu1<<endl;
    return 0;
}
