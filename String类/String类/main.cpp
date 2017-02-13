//
//  main.cpp
//  String类
//
//  Created by mac on 16/3/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string str1;
    string str2="You are a good boy";
    string str3="Xi'an university of posts and telecommunications!";
    str1.append("Steve_ke");
    str1.append(" is");
    str1.append(str2.begin()+7, str2.end());
    cout<<str1<<endl;
    return 0;
}
