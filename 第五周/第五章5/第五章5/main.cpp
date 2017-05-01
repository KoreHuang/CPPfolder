//
//  main.cpp
//  第五章5
//
//  Created by mac on 16/4/8.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class X{
private:
    int *p;
public:
    X(){p=new int[2];cout<<"X(). ";}
    virtual ~X(){delete [] p;cout<<"~X(). \n";}
};
class Y:public X{
private:
    int *q;
public:
    Y(){q=new int [1023];cout<<"Y():T::q="<<q<<". ";}
    ~Y(){delete [] q;cout<<"~Y().";}
};
int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=0;i<8;i++){
        Y *t=new Y;
        X *r=t;
        delete r;
    }
    return 0;
}
