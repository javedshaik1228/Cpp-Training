#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    int i = 1;
    
    while(n--){
        cout<<(i*i)*4<<" ";
        i++;
    }
    
    return 0;
}
