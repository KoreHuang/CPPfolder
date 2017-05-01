//
//  main.cpp
//  第五章7
//
//  Created by mac on 16/4/8.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class myclass{
public:
    myclass();
    myclass(const myclass &o);
    myclass f();
};
myclass::myclass(){
    cout<<"Constructing normally\n";
}
myclass::myclass(const myclass &o){
    cout<<"Constructing copy\n";
}
myclass myclass:: f(){
    myclass temp;
    return  temp;
}
int main(int argc, const char * argv[]) {
    myclass obj;
    obj=obj.f();
    return 0;
}
