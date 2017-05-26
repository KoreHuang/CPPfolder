//
//  main.cpp
//  （4）
//
//  Created by mac on 16/5/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(void)
{	queue<double> str_queue;
    str_queue.push(67.25);
    str_queue.push(32.43);
    str_queue.push(76.88);
    cout<<"the size of the queue is: "<<str_queue.size()<<endl;
    cout<<"the front one "<<str_queue.front()<<endl;
    cout<<"the back one "<<str_queue.back()<<endl;
    str_queue.pop( );
    str_queue.pop( );
    str_queue.pop( );
    if (str_queue.empty( ))
        cout<<" the queue is empty!"<<endl;
    return 0;
}


