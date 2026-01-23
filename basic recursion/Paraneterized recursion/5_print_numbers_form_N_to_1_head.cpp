#include <bits/stdc++.h>
using namespace std;

// Recursive function to print numbers from N to 1
void printNto1(int i, int n) {
    if (i > n) return;
    printNto1(i+1, n);           // recursive call before printing
    cout << i << " ";           // print after recursion call
}

int main(){
    int n = 5;
    
    // Printing N to 1
    printNto1(1, n);
    
    return 0;
}