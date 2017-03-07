//
//  main.cpp
//  作业4
//
//  Created by mac on 16/4/20.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class three_d{
private:
    int x,y,z;
public:
    three_d(int i=0,int j=0,int k=0);
    ~three_d(){};
    three_d friend operator+(three_d &,three_d &);
    friend three_d operator-(three_d &,three_d &);
    three_d operator++(){
        return three_d(x+1,y+1,z+1);
    }
    three_d operator--(){
        return three_d(x-1,y-1,z-1);
    }
    void show(){
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }
};
three_d::three_d(int i,int j,int k):x(i),y(j),z(k){}
three_d operator+(three_d &a,three_d &b){
    return three_d(a.x+b.x,a.y+b.y,a.z+b.z);
}
three_d operator-(three_d &a,three_d &b){
    return three_d(a.x-b.x,a.y-b.y,a.z-b.z);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    three_d obj1(1,2,3),obj2(7,8,9);
    (obj2-obj1).show();
    return 0;
}
