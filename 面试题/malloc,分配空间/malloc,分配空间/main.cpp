//
//  main.cpp
//  malloc,分配空间
//
//  Created by mac on 16/3/29.
//  Copyright © 2016年 mac. All rights reserved.
//运行结果程序崩溃，Getmemory(str)调用结束后，str仍指向NULL，并没有给str分配存储空间

#include <iostream>
using namespace std;
void Getmemory(char * p){
    p=(char*)malloc(100);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    char *str=NULL;
    Getmemory(str);
    strcpy(str, "Thunder");
    strcat(str+2, "Downloader");
    printf(str);
    return 0;
}
