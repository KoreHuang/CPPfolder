//
//  main.cpp
//  sizeof()运算符
//
//  Created by mac on 16/3/29.
//  Copyright © 2016年 mac. All rights reserved.
//
//在c++中sizeof()运算符字符常量的大小为1，在c中sizeof()字符常量的大小为4

#include <iostream>
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    char c='0';
    printf("%lu %d",sizeof(c),sizeof('0'));
    return 0;
}
