//
//  main.cpp
//  实验2
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("The website address of our university is:");
    string str2("www.xupt.edu.cn");
    
    cout << "Initial strings:\n";
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << "\n\n";
    cout << "Insert str1 into str2:\n";
    str2.insert(0,str1);
    cout << str2 << "\n\n";
}
