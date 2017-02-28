//
//  main.cpp
//  my_class
//
//  Created by mac on 16/4/5.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class my_class{
private:
    int x,y;
public:
    my_class(int a,int b):x(a),y(b){}
    my_class(){x=0;y=0;}
    my_class(const my_class &t){
        x=t.x;
        y=t.y;
        cout<<"t:"<<&t<<endl;
    }
    void show(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }
    
};
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    my_class my1(3,4),my2(my1);
    cout<<"my1:"<<&my1<<endl;
    my1.show();
    my2.show();
    return 0;
}
