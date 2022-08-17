#include <iostream>

using namespace std;

int main() {
    int x,n;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter n: ";
    cin>>n;
    
    cout<<x<<"^"<<n<<":"<<endl;
    
    double ans = 1;
    
    while(n--){
        ans *= x;
    }
    
    cout<<ans;

    
    return 0;
}
