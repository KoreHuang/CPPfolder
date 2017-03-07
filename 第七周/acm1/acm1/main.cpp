//
//  main.cpp
//  acm1
//
//  Created by mac on 16/5/13.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    map<string, string> m;
    string s,no;
    cin>>s;
    while(s!="end"){
        cin>>no;
        m.insert(pair<string, string>(s,no));
        cin>>s;
    }
    cin>>s;
    while(s!="end"){
        cin>>no;
        m.insert(pair<string, string>(s,no));
        cin>>s;
    }
    map<string, string>::iterator p;
    for(p=m.begin();p!=m.end();p++)
        cout<<p->first<<" "<<p->second<<endl;
    return 0;
}
