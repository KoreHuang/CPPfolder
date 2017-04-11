//
//  main.cpp
//  作业8
//
//  Created by mac on 16/4/15.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class planet{
    double distance;
    int revolve;
public:
    planet(int d,int r){
        distance=d;
        revolve=r;
    }
    ~planet(){}
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
