//
//  main.cpp
//  (3)
//
//  Created by mac on 16/5/6.
//  Copyright © 2016年 mac. All rights reserved.
//
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main( )
{
    map<string, string> m;
    m.insert(pair<string, string>("王飞", "15829237508"));
    m.insert(pair<string, string>("陈杰", "6554"));
    m.insert(pair<string, string>("李怡霞", "62875"));
    m.insert(pair<string, string>("黄柯", "6900"));
    m.insert(pair<string, string>("陈象", "13279298983"));
    m.insert(pair<string, string>("警电", "110"));
    m.insert(pair<string, string>("急救", "120"));
    string s;
    cin >> s;
    map<string, string>::iterator p;
    p = m.find(s);
    cout<<p->second<<endl;
    return 0;
}