//
//  main.cpp
//  ppt_5.4
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//
#include <iostream>
#include <cstring>
using namespace std;
class my_string {
    char *s;
public:
    my_string(char *str);  //普通构造函数
    my_string(const my_string &obj);
    //自定义的复制构造函数
    ~my_string() { if(s) delete [] s; cout << "Freeing s\n"; }
    void show() { cout << s << "\n"; }
};
my_string::my_string(char *str)	//普通构造函数
{
    s = new char[strlen(str)+1];
    cout<<"Allocating room for s\n";
    strcpy(s, str);
}
my_string::my_string(const my_string &obj)
//自定义的复制构造函数
{
    s = new char[strlen(obj.s)+1];
    strcpy(s, obj.s);
    cout<<"Copy constructor called.\n";
}
void display(my_string ob)
{
    ob.show( );
}
int main()
{
    my_string obj("Hello!");
    display(obj);
    obj.show();
    return 0;
}
