#include<iostream>
#include "swap.h"

using namespace std;



int main(int argc, char **argv){
    int val1 = 10;
    int val2 = 20;

    cout << "1before swap:" << endl;
    cout << "val1=" << val1 << endl;
    cout << "val2=" << val2 << endl;
    swap(val1,val2);
    cout << "2after swap:" << endl;
    cout << "val1=" << val1 << endl;
    cout << "val2=" << val2 << endl;    

    //getchar();
    return 0;
}