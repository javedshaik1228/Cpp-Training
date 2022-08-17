#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 1;
    int diff = 1;
    
    while(n--){
        cout<<i<<" ";
        i += diff*diff;
        diff++;
    }
    
    return 0;
}
