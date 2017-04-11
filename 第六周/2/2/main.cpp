//
//  main.cpp
//  2
//
//  Created by mac on 16/4/15.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
class Person{
protected:
    char *name;
public:
    Person(const char * s){
        name=new char[strlen(s)+1];
        strcpy(name, s);
        printf("Base constructoer\n");
    }
    ~Person(){
        if(!name)
        delete [] name;
        printf("Base destructor\n");
    }
    void show(){
        printf("\tName:%s\n",name);
    }
};
class Student:public Person{
private:
    int score;
    int age;
    char *major;
public:
    Student(char *name,int s,int a,char *m):Person(name){
        major=new char[strlen(m)+1];
        strcpy(major, m);
        score=s;
        age=a;
        printf("Derive constructor\n");
    }
    ~Student(){
        if(!major)
            delete [] major;
        printf("Derive destructor\n");
    }
    void show(){
        Person::show();
        cout<<"\tMajor:"<<major<<endl;
        cout<<"\tAge:"<<age<<endl;
        cout<<"\tScore:"<<score<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Student obj1("Tom",76,19,"Computer scense");
    obj1.show();
    return 0;
}
