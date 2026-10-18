#include <iostream>
#include <algorithm>
using namespace std;

void moveZeroes(int a[], int n){
    
    int pos=0;
    for(int i=0;i<n;i++){
        
        
        if(a[i]!=0){
            
             swap(a[i],a[pos]);
             pos++;
            
             
        }
    }  
}

int main(){
    int a[]={1,0,2,4,0,0,7};
    int n=sizeof(a)/sizeof(a[0]);
    moveZeroes(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
  
    return 0;
}