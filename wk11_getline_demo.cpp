//------------------------------------------------------------------------------
// wk11_getline_demo.cpp
// 
//  - cin limits you to one word of input - if the user types "kitty cat",
//      cin will only give you "kitty"
// 
//  - getline() gets you everything the user typed before they typed the
//      enter key - if the user types "kitty cat", getline() will give you 
//      "kitty cat"
// 
//  - cin and getline() represent two different modes of the same input
//      stream. Don't mix them. Use one or the other in your code.
//------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // 1) get an entire line of input with getline

    cout << "\nType some words: ";
    string input_line;
    getline(cin, input_line);

    cout << "\nYou typed: " << input_line << '\n';

    // 2) Use getline to get one character of input

    cout << "Type y or n: ";
    
    // we still need to get the entire line of input
    getline(cin, input_line);

    cout << "\nYou typed: " << input_line << '\n';

    // If the user types only the enter key, input_line
    // will be an empty string ("")
    // 
    // Before accessing any char in input_line, make sure 
    // input_line has some input in it!

    char input_char { };

    if (input_line.size() == 0) {
        // we could assume an empty input_line means "no" like this:
        input_char = 'n';
        cout << "You only typed the enter key, I assume that means no";
    }
    else {
        // we got input so grab the first char
        input_char = input_line.at(0);
        cout << "The first character you typed was: " << input_char;
    }

    return 0;
}
