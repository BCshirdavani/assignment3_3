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
//      ERROR:      This somewho keeps truncating digits off the sum
//                  the first loop makes the correct number,
//                  but the second loop loses a few digits in the sum result
//
//****************************************************

#include <iostream>
#include <math.h>
#include "LinkedStack.h"
using namespace std;

int main() {

    //****************************************************
    //                                      read in numbers
    string num1;
    string num2;
    LinkedStack<float>* s1;
    s1 = new LinkedStack<float>();
    LinkedStack<float>* s2;
    s2 = new LinkedStack<float>();
    LinkedStack<float>* s3;
    s3 = new LinkedStack<float>();
    
    cout << "enter a very large number: ";
    getline(cin, num1);
    cout << "enter a very large number: ";
    getline(cin, num2);

    //****************************************************
    //                              make stacks from string
    float temp;
    for ( int i=0; i < num1.length(); i++ ){
        temp = (num1[i] - '0');
        s1->push(temp);
    }
    for ( int i=0; i < num2.length(); i++ ){
        temp = (num2[i] - '0');
        s2->push(temp);
    }
    // test of stack view and number conversion
    cout << "num1 = " << num1 << endl;
    cout << "s1 = " << *s1 << endl;\
    cout << "s1.length() = " << s1->getLength() << endl;
    cout << "num2 = " << num2 << endl;
    cout << "s2 = " << *s2 << endl;
    cout << "s2.length() = " << s2->getLength() << endl;
    
    //****************************************************
    //                                      do adding math
    //      add a pop() number from stack to the sum
    //      after multiplying by the correct power of 10
    float sum = 0;
    float tempSum_s1 = 0;
    float powerSum_s1 = 0;
    for ( int i = 0; i <= s1->getLength()+1; i++ ){
//        cout << "\ti: " << i << endl;
        tempSum_s1 = s1->pop();
        powerSum_s1 = tempSum_s1 * ( pow(10,i) );
        sum = sum + powerSum_s1;
//        cout << "\t\tsum : " << sum << endl;
    }
//    cout << "Sum is part 1 : " << sum << endl;
    
    float tempSum_s2 = 0;
    float powerSum_s2 = 0;
    for ( int j = 0; j <= s2->getLength()+1; j++ ){
//        cout << "\tj: " << j << endl;
        tempSum_s2 = s2->pop();
        powerSum_s2 = tempSum_s2 * ( pow(10,j) );
        sum = sum + powerSum_s2;
//        cout << "\t\tsum : " << sum << endl;
    }

    cout << "Sum = " << sum << endl;
    
    return 0;

    
}
