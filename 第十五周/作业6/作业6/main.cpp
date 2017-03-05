//
//  main.cpp
//  作业6
//
//  Created by mac on 16/6/3.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10],index;
    srand(time(NULL));
    for (int i=0; i<10; i++) {
        a[i]=rand()%100;
        cout<<a[i]<<' ';
    }
    try{
        cout<<endl<<"Input index:";
        cin>>index;
        if(index>9||index<0) throw 0;
        cout<<"The value is:"<<a[index]<<endl;
    }
    catch(int){
        cout<<"Out of range!"<<endl;
        return -1;
    }
    return 0;
}
