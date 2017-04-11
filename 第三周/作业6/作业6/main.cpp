//
//  main.cpp
//  作业6
//
//  Created by mac on 16/3/25.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class Circle{
private:
    float radius;
    static int count;
public:
    Circle(float r){
        radius=r;
        count++;
    }
    ~Circle(){
        count--;
    }
    static int num(){
        return count;
    }
};
int Circle::count=0;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Circle r1(2),r2(3),r4(4),r5(5);
    int count=Circle::num();
    r1.~Circle();
    cout<<"总共有:"<<count<<"个圆!"<<endl;
    cout<<"还有:"<<Circle::num()<<"个"<<endl;
    
    return 0;
}
