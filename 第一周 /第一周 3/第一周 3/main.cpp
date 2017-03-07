//
//  main.cpp
//  第一周 3
//
//  Created by mac on 16/3/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *name;
    name=new char[10];
    if(!name){
        std::cout<<"Out of memory!"<<std::endl;
        return 1;
    }else{
        std::cin>>name;
        std::cout <<name<<std::endl;
    }
    delete []name;
    return 0;
}
