#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n<=0){
        cout<<"Invalid Input"<<endl;
    }

    else if(n<=3){
        int arr[3] = {1,4,7};
        for(int i = 0; i<n ; i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        int arr[n];
        arr[0] = 1;
        arr[1] = 4;
        arr[2] = 7;
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
        for(int i = 3; i<n; i++){
            arr[i] = arr[i-1]+ arr[i-2]+ arr[i-3];
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}
