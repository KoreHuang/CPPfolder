//
//  main.cpp
//  通讯录同步
//
//  Created by mac on 16/5/27.
//  Copyright © 2016年 mac. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,string> phonenum;
    string name,num;
    
    ifstream in1("phonebook1.txt");//创建流对象并打开文件
    if(!in1.is_open()) { //判断文件是否成功打开
        cout << "Cannot open file.\n";
        return 1;
    }
    //从文件phonebook1.txt中读出数据
    while(!in1.eof())
    {
        in1 >>name>>num;
        phonenum.insert(pair<string,string>(name,num));
    }
    in1.close();//关闭文件
    
    ifstream in2("phonebook2.txt");//打开文件
    if(!in2.is_open()) { //判断文件是否成功打开
        cout << "Cannot open file.\n";
        return 1;
    }
    //从文件phonebook2.txt中读出数据
    while(!in2.eof())
    {
        in2 >>name>>num;
        phonenum.insert(pair<string,string>(name,num));
    }
    in2.close();//关闭文件
    
    ofstream out("phonebook3.txt");//创建流对象并打开文件
    if(!out.is_open()) { //判断文件是否成功打开
        cout << "Cannot open file.\n";
        return 1;
    }
    map<string,string>::iterator at = phonenum.begin();
    while(at != phonenum.end())
    {
        out << at->first<<' '<<at->second<< endl;//将电话号码写入到phonebook3.txt
        at++;
    }
    out.close();//关闭文件
    
    return 0;
}