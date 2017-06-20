//
//  main.cpp
//  友元函数类作为另类友元
//
//  Created by mac on 16/3/20.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Girl;
class Boy{
private:
    int age;
    char*name;
public:
    Boy(int a,char* str){
        age=a;
        name=new char[strlen(str)+1];
        strcpy(name, str);
    }
    ~Boy(){
        if(name!=NULL){
            delete name;
        }
    }
    void disp(Girl &);
};
class Girl{
private:
    int age;
    char *name;
public:
    Girl(int a,char *str){
        age=a;
        name=new char[strlen(str)+1];
        strcpy(name, str);
    }
    ~Girl(){
        if(name!=NULL){
            delete name;
        }
    }
    friend void Boy::disp(Girl&);
};
void Boy::disp(Girl &x){
    cout<<"男生的姓名是:"<<name<<endl;
    cout<<"该男生今年:"<<age<<"岁"<<endl;
    cout<<"女生的姓名是:"<<x.name<<endl;
    cout<<"该女生今年:"<<x.age<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Boy b(18,"张三");
    Girl g(19,"李四");
    b.disp(g);
    return 0;
}
