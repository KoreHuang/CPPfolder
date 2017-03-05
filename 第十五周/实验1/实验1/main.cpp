//
//  main.cpp
//  实验1
//
//  Created by mac on 16/6/3.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n;
    std::cout << "Please input two integers:";
    cin>>m>>n;
    try {
        if(n==0) throw 0;
        cout<<(m/n)<<endl;
    } catch (int) {
        cout<<"Divided by 0!"<<endl;
        return -1;
    }
    return 0;
}
