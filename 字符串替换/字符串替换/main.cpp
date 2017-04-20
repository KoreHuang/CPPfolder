//
//  main.cpp
//  字符串替换
//
//  Created by mac on 16/5/11.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    string temp;
    getline(cin,temp);
    while (temp!="end") {
        s=s+temp+'\n';
        getline(cin,temp);
    }
    string subString;
    string repString;
    cin>>subString>>repString;
    string::size_type found;
    string::size_type lTh;
    found=s.find(subString);
    lTh=subString.length();
    while (found!=string::npos) {
        s.replace(found, lTh, repString);
        found=s.find(subString);
    }
    cout<<"The replaced string is:"<<endl;
    cout<<s<<endl;
    return 0;
}
