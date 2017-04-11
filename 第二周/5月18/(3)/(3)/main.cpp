//
//  main.cpp
//  (3)
//
//  Created by mac on 16/3/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
int max(int x,int y){return x>y?x:y;}
double max(double x,double y){return x>y?x:y;}
long max(long x,long y){return x>y?x:y;}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"The max value in (35,48) is:"<<max(35,48)<<endl;
    cout<<"The max value in(6.7,7.5) is:"<<max(6.7,7.5)<<endl;
    cout<<"The max value in (2147483648,2147483649) is:"<<max(21474836,214778)<<endl;
    return 0;
}
