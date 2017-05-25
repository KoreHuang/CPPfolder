//
//  main.cpp
//  友元函数（2）
//
//  Created by mac on 16/3/17.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Boy;
class Girl{
private:
    char name[25];
    int age;
public:
    Girl(char N[],int A);
    friend void parad(const Girl &,const Boy &);
};

Girl::Girl(char N[],int A){
    strcpy(name, N);
    age=A;
}
class Boy{
private:
    char name[25];
    int age;
public:
    Boy(char N[],int A);
    friend void parad(const Girl &plg,const Boy &plb);
};
Boy::Boy(char N[],int A){
    strcpy(name, N);
    age=A;
}
void parad(const Girl &plg,const Boy &plb){
    cout<<"女孩的姓名:"<<plg.name<<endl;
    cout<<"女孩的年龄:"<<plg.age<<endl;
    cout<<"男孩的姓名:"<<plb.name<<endl;
    cout<<"男孩的年龄:"<<plb.age<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Girl g1("李华",12);
    Girl g2("王红",14);
    Girl g3("李芳",15);
    Boy b1("张林",14);
    Boy b2("王刚",17);
    Boy b3("赵超",14);
    return 0;
}
