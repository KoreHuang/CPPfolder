//
//  main.cpp
//  第一周 2
//
//  Created by mac on 16/3/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int max(int a,int b);
double max(double a,double b);
long max(long a,long b);
int main(int argc, const char * argv[]) {
    int a=3,b=5;
    long x=35896721,y=35896733;
    double c=7.15,d=8.43;
    cout<<"The max value in(3,5) is:"<<max(a,b)<<endl;
    cout<<"The max value in(35896721,35896733) is:"<<max(x,y)<<endl;
    cout<<"The max value in(7.15,8.43) is:"<<max(c,d)<<endl;
    return 0;
}
int max(int a,int b){
    return a>b?a:b;
}
double max(double a,double b){
    return a>b?a:b;
}
long max(long a,long b){
    return a>b?a:b;
}