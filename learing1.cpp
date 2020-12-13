#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int val[size];
    cout<<"Enter elements for the array : "<<endl;
    for(int i=0; i<size; i++){
        cin>>val[i];
    }
    for(int i=0; i<size; i++){
        cout<<val[i];
    }
    
    return 0;
}