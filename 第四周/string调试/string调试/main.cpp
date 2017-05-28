//
//  main.cpp
//  string调试
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    string str1("end"),str2("good i love you");
    cout<<str2.size()<<endl; 
    cout<<str1.compare(str2);
    cout<<endl<<"Input string1:"<<endl;
    cin>>str1;
    cout<<"Input string2:";
    cin>>str2;
    cout<<endl<<"OUT:"<< str2.compare(str1)<<endl;
    cout<<str2.size()<<endl;
    return 0;
}
