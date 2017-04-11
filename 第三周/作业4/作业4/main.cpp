//
//  main.cpp
//  作业4
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class samp{
private:
    int i;
public:
    samp(int n){i=n;}
    void set_i(int n){i=n;}
    int get_i(){return i;}
};
void sqe_it(samp &o){
    o.set_i(o.get_i()*o.get_i());
    cout<<"copy of has i value of"<<o.get_i()<<endl;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    samp a(10);
    sqe_it(a);
    cout<<"copy of a has i value of"<<a.get_i()<<endl;
    return 0;
}
