//
//  main.cpp
//  作业5
//
//  Created by mac on 16/6/3.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include<cmath>
using namespace std;
class Caculator{
    int value;
public:
    Caculator(int v=0){
        value=v;
    }
    
    ~Caculator(){}
    double my_sqrt(){
        if(value<0) throw 0;
        return sqrt(value);
    }
    void modify(int v){
        value=v;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Caculator c1;
    try {
        int x;
        cout<<"Please input number:";
        cin>>x;
        c1.modify(x);
        cout<<"The sqrt resault is:"<<c1.my_sqrt()<<endl;
    } catch (int) {
        cout<<"The value must greater than zero!"<<endl;
        return -1;
    }
    return 0;
}
