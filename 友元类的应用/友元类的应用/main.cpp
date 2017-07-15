//
//  main.cpp
//  友元类的应用
//
//  Created by mac on 16/3/21.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Girl;
class Boy{
private:
    int age;
    char *name;
public:
    Boy(char *str,int a);
    ~Boy(){
        if(name!=NULL){
            delete name;
        }
    };
    void dispa(Girl&);
    void dispn(Girl&);
};
Boy::Boy(char *str,int age){
    name=new char[strlen(str)+1];
    strcpy(name, str);
    Boy::age=age;
}
class Girl{
private:
    int age;
    char *name;
public:
    Girl(char *str,int a){
        name=new char[strlen(str)+1];
        strcpy(name, str);
        age=a;
    }
    ~Girl(){
        if (name!=NULL) {
            delete name;
        }
    }
    friend Boy;
};
void Boy::dispa(Girl &x){
    cout<<"男生的姓名是:"<<name<<endl;
    cout<<"女生的姓名是:"<<x.name<<endl;
}
void Boy::dispn(Girl &x){
    cout<<"男生的年龄是:"<<age<<endl;
    cout<<"女生的年龄是:"<<x.age<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Boy b1("张三",16);
    Girl g1("李四",18);
    b1.dispa(g1);
    b1.dispn(g1);
    return 0;
}
