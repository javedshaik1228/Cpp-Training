#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 1;
    int sign = 1;
    int cnt = 1;
    
    while(n--){
        cout<<i*i*sign<<" ";
        if(i == cnt * (cnt + 1) / 2){
            cout<<endl;
            cnt++;
        }
        i++;
        sign *= -1;

    }

    return 0;
}
