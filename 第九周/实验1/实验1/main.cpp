//
//  main.cpp
//  实验1
//
//  Created by mac on 16/4/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>
void Swap(T &A,T &B){
    T temp;
    temp=A;
    A=B;
    B=temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;int b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<' '<<b<<endl;
    char m,n;
    cin>>m>>n;
    Swap(m,n);
     cout<<m<<' '<<n<<endl;
    return 0;
}
