//
//  main.cpp
//  作业7
//
//  Created by mac on 16/4/15.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class A{
protected:
    int m,n;
public:
    void set(int a,int b){
        m=a;
        n=b;
    }
    void show(){
        cout<<m<<" "<<n<<"\n";
    }
};
class B:public A{
    int s;
public:
    void sets(){
        s=n*m;
    }
    void shows(){
        cout<<s<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    B obj;
    obj.set(2,3);
    obj.show();
    obj.sets();
    obj.shows();
    return 0;
}
