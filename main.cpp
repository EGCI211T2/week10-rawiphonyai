#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"



int main(){

    
    struct Time t1,t2,t3;
    cout<<"What time was it? ";

    getTime(t1);
    cout<<"What time is it now? ";

    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);


/*
    int age;
    string colour;
    int *x =new int[5];

    cout<<"Hello world"<<endl;
    cout<<"Your age and colour : ";
    cin>>age>>colour;
    square(age);
    cout<<"Age:"<<setfill('x')<<setw(8)<<fixed<<setprecision(2)<<age<<endl;
    cout<<"Colour:"<<setfill('x')<<setw(8)<<colour<<endl;


delete []x;
 */

}