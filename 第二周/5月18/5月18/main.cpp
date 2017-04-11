//
//  main.cpp
//  5月18
//
//  Created by mac on 16/3/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
/*const*/ int model=90;
/*const*/ int v[]={1,2,3,4};
/*const*/ int x;
void f(){
    model=200;
    v[2]++;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    cout<<model<<endl;
    for (int i=0; i<4; i++) {
        cout<<v[i]<<endl;
    }
    f();
    cout<<model<<endl;
    for (int i=0; i<4; i++) {
        cout<<v[i]<<endl;
    }
    return 0;
}
