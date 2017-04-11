//
//  main.cpp
//  (2)
//
//  Created by mac on 16/3/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
void sqr_it(int *i);
int main(int argc, const char * argv[]) {
    int x;
    x=10;
    sqr_it(&x);
    cout<<"The squer of x is:"<<x<<endl;
    return 0;
}
void sqr_it(int *i){
    *i=(*i)*(*i);
}
