//
//  main.cpp
//  string
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    string str1,str2;
    string testr;
    string end="0";
    getline(cin, testr);
    while (testr.compare(end)) {
        str+=testr;
        str+='\n';
        getline(cin, testr);
        //cout<<"***"<<str<<"   ";
        //cout<<"&&&"<<testr<<"   ";
    }
    cin>>str1;
    cin>>str2;
    string::size_type pfd=str.find(str1);
    while (pfd!=string::npos) {
        str.replace(pfd, str2.length()-1, str2);
        pfd=str.find(str1);
    }
    cout<<str<<endl;

    return 0;
}
