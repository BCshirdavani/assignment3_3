//****************************************************
//
//    Author:       Beau Shirdavani
//    Date:         11-23-2017
//    Title:        Assignment 3_3
//                  main.cpp
//
//      main theory of this math will be to add numbers of
//      matching columns from each stack, and multiply them
//      by the appropriate power of 10 each, then continue to
//      add next column
//
//****************************************************

#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main() {
    string s1 = "thisString";
    cout << "length of string: "  << s1.length() << endl;
    cout << "elements 0 - 2 fo string: " << s1[0] << endl;
    
    // print string as loop
    for ( int i = 0; i < s1.length(); i++ ){
        cout << s1[i] << endl;
    }
    
    
    //
    
    
    
    
    
    
    // practice for assignment4_4
    // reverse an integer
    // trying to take the last digit off, and record it
    // using a combo of div by 10 to isolate ending, then modulus 10
    int x = 1234;
    cout << "x: " << x << endl;
    int y;
    y = x/10;
    cout << "y = x/10: " << y << endl;
    int z;
    z = (y%10);
    cout << "z = y % 10: " << z << endl;
    int w = 2%3;
    cout << w << endl;
    
    // that works, but think about infinite recursion...when would recursive call stop?
    int q;
    q = y/10;
    cout << "q = y/10: " << q << endl;
    int r;
    r = q/10;
    cout << "r = q/10: " << r << endl;
    int t;
    t = r/10;
    cout << "t = r/10: " << t << endl;
    int v;
    v = t/10;
    cout << "v = t/10: " << v << endl;
    // check the length of the itneger maybe?
    
    return 0;

    
}
