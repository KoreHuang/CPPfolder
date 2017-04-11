//
//  main.cpp
//  (4)
//
//  Created by mac on 16/3/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    char *name;
    name=new char[10];
    if(!name){
        cout<<"Allocation error\n";
        return 1;
    }
    cout<<"Input your name :";
    cin>>name;
    cout<<name;
    delete [] name;
    return 0;
}