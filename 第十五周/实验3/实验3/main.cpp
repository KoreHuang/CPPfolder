//
//  main.cpp
//  实验3
//
//  Created by mac on 16/6/3.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
void myterm(){
    cout<<"This is my terminater."<<endl;
    exit(1);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    try {
        set_terminate(myterm);
        throw "Exception...";
    } catch (int i) {
        
    }
    return 0;
}
