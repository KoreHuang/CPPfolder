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
    int i,j,k=0;
    T temp;
    for(i=0;i<size-1;i++){
        k=i;
        for(j=i+1;j<size;j++){
            if(data[j]<data[k]){
                k=j;
            }
        }
        if(k!=i){
            temp=data[i];
            data[i]=data[k];
            data[k]=temp;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n;
    cin>>m;
    int *data;
    data=new int[m];
    for (int i=0; i<m; i++) {
        cin>>data[i];
    }
    ChoiceSort(data, m);
    for (int i=0; i<m; i++) {
        cout<<data[i]<<endl;
    }

    double *value;
    cin>>n;
    value=new double[n];
    for (int i=0; i<n; i++) {
        cin>>value[i];
    }
    ChoiceSort(value, 5);
    for (int i=0; i<n; i++) {
        cout<<value[i]<<endl;
    }
    delete []data;
    delete []value;
    return 0;
}
