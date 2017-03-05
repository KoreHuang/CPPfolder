//
//  main.cpp
//  实验2
//
//  Created by mac on 16/6/3.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>
T division(T x,T y);
int main(int argc, const char * argv[]) {
    // insert code here...
    double m,n;
    cout << "Please input two integers:";
    cin>>m>>n;
    try {
        //if(n==0) throw 0;
        cout<<division(m,n)<<endl;
    } catch (int) {
        cout<<"Divided by 0!"<<endl;
        return -1;
    }
    return 0;
}
template <class T>
T division(T x,T y){
    if(!y)
        throw 0;
    return x/y;
}