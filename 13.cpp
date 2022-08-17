// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 1;
    
    while(n--){
        if(i % 4 == 0){
            i++;
            continue;
        }
        cout<<i*i<<" ";
        i++;
    }

    return 0;
}
