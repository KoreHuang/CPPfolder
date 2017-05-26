//
//  main.cpp
//  姓名排序
//
//  Created by mac on 16/5/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void load(vector<string>&);
void print(vector<string>);
const int SIZE=6;
int main()
{ vector<string> v(SIZE);
    load(v);
    sort(v.begin(),v.end()); //排序（利用标准库中的模板sort( )。）
    print(v);
    return 0;
}
void load(vector<string>& v)
{
    vector<string>::iterator p=v.begin();
    while (p!=v.end()) {
        cin>>*p;
        p++;
    }
}
void print(vector<string> v)
{
    for (int i=0; i<SIZE; i++)
        cout << v[i] << endl;
}
