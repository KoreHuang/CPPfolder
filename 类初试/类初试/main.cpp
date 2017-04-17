//
//  main.cpp
//  类初试
//
//  Created by mac on 16/3/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace  std;
class Complex {
    double real,image;
    
public:
    void init(double r,double i){
        real=r;
        image=i;
    }
    double abscomplex(){
        double t;
        t=real*real+image*image;
        return sqrt(t);
    }
};
int main(int argc, const char * argv[]) {
    Complex A;
    A.init(1.1,2.2);
    cout<<"复数的绝对值是:"<<A.abscomplex()<<endl;
    return 0;
}
