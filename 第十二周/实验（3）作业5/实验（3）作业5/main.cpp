//
//  main.cpp
//  实验（3）作业5
//
//  Created by mac on 16/5/27.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ofstream fout("test1.txt");
    if(!fout){
        cout<<"Open fail";
        return 1;
    }
    fout<<"Learning c++ programming is fun!";
    fout.close();
    ifstream fin("test1.txt");
    if(!fin){
        cout<<"Open fail";
        return 1;
    }
    string priString,tmpString;
    fin>>tmpString;
    while (!fin.eof()) {
        priString+=tmpString+' ';
        fin>>tmpString;
        }
    priString+=tmpString;
    cout<<priString<<endl;
    fin.close();
    return 0;
}
