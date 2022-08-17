#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n<2){
        if(n<1)
            cout<<"Invalid input";
        else
            cout<<1;
    }
    
    else{
        int arr[n];
        arr[0] = 1;
        arr[1] = 2;
    
        for(int i = 2; i<n; i++){
            if(i%2 == 0){   //i is even so odd index.   
                arr[i] = arr[i-2] + 3;
            }    
            else{
                arr[i] = arr[i-2] + 4;
            }
        }
    
        for(int i = 0; i<n; i++)
            cout<<arr[i]<<" ";
        }

    
    return 0;
}
