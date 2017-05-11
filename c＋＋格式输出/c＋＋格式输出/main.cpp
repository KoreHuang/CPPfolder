//
//  main.cpp
//  c＋＋格式输出
//
//  Created by mac on 16/5/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    /* std::cout << "Hello, World!\n";
    /cout.setf(ios::showpos|ios::scientific);
    cout<<1999<<' '<<3.1415926<<endl;
    cout.precision(2);
    cout.width(10);
    cout<<1999<<' ';
    cout.width(10);
    cout<<3.1415926<<endl;
    //cout.fill('$');
    */
    //cout.width(10);
    //cout<<1999<<' ';
    //cout.width(15);
    //cout<<3.1415926<<endl;
    int i,j=0;
    for(i=32;i<127;i++){
        cout<<setw(4)<<hex<<i<<'H'<<setw(2)<<char(i);
        j++;
        if(!(j%8))cout<<endl;
    }
    printf("\n");
    return 0;
}
