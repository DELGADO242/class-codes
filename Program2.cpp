#include<iostream>
using namespace std; 

int main() {
    int x;  // we ask c++ to get a memory location from RAM and name it x
            // and we are going to store an int number (whole number) in x 
    x=10;   // here we ask c++ tos tore value of 10 in memory location named x
    int y;  // we get another memory location and name it y
            // we dont stire a value in that memory location
            // it will keep whatever from the time in the past that had been 
            // stored in that memory location -- lets call it a garbage value
  cout << "x; " << x << endl;
  cout << "y; " << y << endl;   
}