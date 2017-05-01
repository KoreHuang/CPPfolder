//
//  main.cpp
//  第五章7
//
//  Created by mac on 16/4/8.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype{
    char *p;
public:
    strtype(char *s);
    ~strtype(){delete [] p;}
    char *get(){return p;}
};
strtype::strtype(char *s){
    int l;
    l=strlen(s)+1;
    p=new char[l];
    if(!p){
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p, s);
}
void show(strtype &x){
    char *S;
    S=x.get();
    cout<<S<<endl;
}
int main(int argc, const char * argv[]) {
    strtype a("Hello"),b("There");
    show(a);
    show(b);
    return 0;
}
