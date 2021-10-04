#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string str;    
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cout << i + j << endl;    
    cin >> e;
    cout << fixed << std::setprecision(1) << d + e << endl; 
    std::cin.ignore();   
    getline(cin ,str);
    // Print the sum of both integer variables on a new line.
    // Print the sum of the double variables on a new line.
    // Concatenate and print the String variables on a new line
    cout << s + str << endl;
    // The 's' variable above should be printed first.
    return 0;
}