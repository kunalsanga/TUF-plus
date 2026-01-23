#include <bits/stdc++.h>
using namespace std;

// Recursive function to print numbers from N to 1
void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";           // print before recursion call
    printNto1(n-1);             // recursive call after printing
}

int main(){
    int n = 5;
    
    // Printing N to 1
    printNto1(n);
    
    return 0;
}