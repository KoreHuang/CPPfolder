//
//  main.cpp
//  3
//
//  Created by mac on 16/4/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>
T Min(T A,T B){
    return A>B?B:A;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    double dobj1=1.1,dobj2=2.2;
    char cobj1='c',cobj2='w';
    int i=12,j=68;
    cout<<Min<int>(i,cobj1)<<endl;
    cout<<Min(dobj1,dobj2)<<endl;
    cout<<Min<char>(cobj2,j)<<endl;
    //将显式实例化，改为隐式实例化后。结果出错。
    //cout<<Min(i,cobj1)<<endl;
    //error:issues description:Users/mac/Desktop/c++ folder/第九周/3/3/main.cpp:24:11: No matching function for call to 'Min'
    //cout<<Min(cobj2,j)<<endl;
    //error:issues description:/Users/mac/Desktop/c++ folder/第九周/3/3/main.cpp:26:11: No matching function for call to 'Min'
    return 0;
}
