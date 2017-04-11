//
//  main.cpp
//  实验4
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Date {
    int d, m, y;
public:
    Date(int y,int m,int d){
        Date::d=d;
        Date::m=m;
        Date::y=y;
    }
    int day( ) const{ return d; }
    int month( ) const { return m; }
    int year( ) const;
};
// const是函数原型的一个组成部分,因此在函数定义部分也要带const关键字。
inline int Date::year( ) const {
    return y;
}
int main(int argc, const char * argv[]) {
    Date d(2016,3,24);
    cout<<"现在是:"<<d.year()<<"年"<<endl;
    
    return 0;
}
