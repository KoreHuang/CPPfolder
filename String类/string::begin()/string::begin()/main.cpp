//
//  main.cpp
//  string::begin()
//
//  Created by mac on 16/3/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    string str1;
    str1="I'm super man!";
    for(string::iterator i=str1.begin();i!=str1.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
