#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: "<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"enter the num to find in array: "<<endl;
    cin>>x;
    int i=0;
    for(i ; i<n;i++){
        if(arr[i]==x){
            cout<<"Found the number in array!"<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"Number NOT found in the array :("<<endl;
    }
    
    return 0;
}
