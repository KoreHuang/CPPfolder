//
//  main.cpp
//  选择排序的函数模板
//
//  Created by mac on 16/4/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>
void ChoiceSort(T *data,int size){
    int i,j,k=0,tag;
    T temp;
    for(i=0;i<size-1;i++){
        tag=0;
        for(j=i+1;j<size;j++){
            if(data[j]<data[i]){k=j;tag=1;}
        }
        if(tag){
            temp=data[i];
            data[i]=data[k];
            data[k]=temp;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    string data[5]={"Zhangsan","Lisi","Liai","Congcong","Mengmeng"};
    ChoiceSort(data, 5);
    for (int i=0; i<5; i++) {
        cout<<data[i]<<endl;
    }
    int value[5]={2,1,3,5,4};
    ChoiceSort(value, 5);
    for (int i=0; i<5; i++) {
        cout<<value[i]<<endl;
    }
    //cout<<("Mengmeng">"Congcong"?"Mengmeng":"Congcong")<<endl;
    return 0;
}
