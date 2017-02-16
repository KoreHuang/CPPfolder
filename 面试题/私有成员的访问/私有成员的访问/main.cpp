//
//  main.cpp
//  私有成员的访问
//
//  Created by mac on 16/3/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class myclass{
private:
    int x,y;
public:
    myclass():x(0),y(0){}
    myclass(int x,int y){
        /*myclass::*/this->x=x;
        /*myclass::*/this->y=y;
    }
private:
    friend void out(myclass& a){
        cout<<"x="<<a.x<<",y="<<a.y<<endl;
    }
};
class my_class{
    int *p;
public:
    my_class(int &t){
        int *x,y=3;
        x=&y;
        p=x;
        y=4;
    }
    void print(){
        cout<<*p<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    myclass my(3,4);
    out(my);
    int t=3;
    my_class my1(t);
    my1.print();
    return 0;
}
