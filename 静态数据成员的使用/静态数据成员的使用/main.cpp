//
//  main.cpp
//  静态数据成员的使用
//
//  Created by mac on 16/3/16.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    char *name;
    char *stu_no;
    float score;
    static int count;
    static float sum;
    static float ave;
public:
    Student(char *namei,char *stu_noi,float scorei);
    ~Student();
    void show();
    void show_count_sum_ave();
};
Student::Student(char *namei,char *stu_noi,float scorei){
    name=new char[strlen(namei)+1];
    strcpy(name, namei);
    stu_no=new char[strlen(stu_noi)+1];
    strcpy(stu_no, stu_noi);
    score=scorei;
    count++;
    sum=sum+score;
    ave=sum/count;
}
Student::~Student(){
    if(name!=NULL){
        delete []name;
        name=NULL;
    }
    if(stu_no!=NULL){
        delete []stu_no;
        stu_no=NULL;
    }
    count--;
    sum-=score;
    ave=sum/count;
}
void Student::show(){
    cout<<"\nName:"<<name;
    cout<<"\nNo.:"<<stu_no;
    cout<<"\nScore:"<<score;
}
void Student::show_count_sum_ave(){
    cout<<"Count:"<<count<<endl;
    cout<<"Average score:"<<ave<<endl;
}
int Student::count=0;
float Student::sum=0.0;
float Student::ave=0.0;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Sir!\n";
    Student stu1("张大伟","06143042",80);
    stu1.show();
    stu1.show_count_sum_ave();
    Student stu2("李明","06143043",90);
    stu2.show();
    stu2.show_count_sum_ave();
    Student stu3("王华","06143044",70);
    stu3.show();
    stu3.show_count_sum_ave();
    stu3.~Student();
    cout<<"\n<--------------->\n";
    stu2.show();
    stu2.show_count_sum_ave();
    cout<<"\n<--------------->\n";
    return 0;
}
