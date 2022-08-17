#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    int a = 0;
    int b = 1;
    
    while(n--){
        int temp = b;
        b = b + a;
        a = temp;
        cout<<a<<" ";
    }
    
    return 0;
}
