//
//  main.cpp
//  Book Exercise 4.16 - Process a String
//
//  Created by ax on 9/12/16.
//  Copyright © 2016 COMP130. All rights reserved.
//


#include <iostream>
using namespace std;

int main() {
    
    cout << "Process a String, Find Length and First Character \n";
    
    // Data and Initialization
    
    string input_string = " ";
    
    // I
    cout << "Enter a string: ";
    cin >> input_string;
    
    // P 0
    cout << "String length: " << input_string.length() << endl;
    cout << "The first character is: " << input_string.at(0) << endl;
    
    return 0;
}
