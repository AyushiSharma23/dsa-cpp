#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(int a[], int n){
    vector <int > b(n);
    
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
        b[j]=a[i];
        j++;
   
             
        }
    }  
    while(j<n){
    b[j]=0;
    j++;}
    for(int i=0;i<n;i++){
        a[i]=b[i];
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