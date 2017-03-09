//
//  main.cpp
//  11.6操纵符实现
//
//  Created by mac on 16/5/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<setiosflags(ios::showpos|ios::scientific)<<1999<<' '<<3.1415926<<endl;
    cout<<setiosflags(ios::uppercase)<<1999<<' '<<3.1415926<<endl;
    cout<<resetiosflags(ios::uppercase)<<resetiosflags(ios::scientific)<<setiosflags(ios::fixed)<<1999<<' '<<3.1415926<<endl;
    return 0;
}
