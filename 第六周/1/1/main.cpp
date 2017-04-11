//
//  main.cpp
//  1
//
//  Created by mac on 16/4/8.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class planet {
protected:
    double distance;
    int revolve;
    planet(){
        distance=0;
        revolve=0;
    }
    planet(double d, int r){
        distance=r;
        revolve=d;
    }
};
class earth:public planet{
       double circumference; public:
    earth(double d,int r):planet(d,r){
        circumference=2*d*3.1416;
    }
    void show();
};
void earth::show(){
    cout<<"Circumference:"<< circumference<<endl;
    cout<<"Distance:"<<distance<<endl;
    cout<<"Revolve:"<<revolve<<endl;
}
/* Create earth(double d,int r). Have it pass the distance and days
 of revolution back to planet. Have it compute the circumference of the orbit. (Hint: circumference=2*r*3.1416) */
// Create a function called show( ) that displays the information. };
int main( void) {
    double dis;
    cin >> dis;
    earth ob(dis,365);
    ob.show( );
    return 0;
}