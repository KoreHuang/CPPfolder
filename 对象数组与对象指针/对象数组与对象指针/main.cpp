//
//  main.cpp
//  对象数组与对象指针
//
//  Created by mac on 16/3/10.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class exam{
private:
    int x;
public:
    exam();
    exam(int n){
        x=n;
    }
    int get_x(){
        return x;
    }
};
exam::exam(){
    x=60;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    exam a[4]={74,96,83,62};
    for (int i=0; i<4; i++) {
        cout<<a[i].get_x()<<endl;
    }
    exam b[4]={78,86};
    for (int j=0; j<4; j++) {
        cout<<b[j].get_x()<<endl;
    }
    exam *p=&a[2];
    cout<<p->get_x()<<" "<<(*p).get_x()<<endl;
    
    return 0;
}
