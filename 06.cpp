#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    int i = 1;
    int diff = 2;
    
    while(n--){
        cout<<i<<" ";
        i = i + diff;
        diff += 2;
    }
    
    return 0;
}
