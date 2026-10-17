#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    if(n==0){
        cout<<"no element in array"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"only one element in array....Sorted"<<endl;
        return 0;
    
    }
    int flag=0;
    for(int i=0;i<=n-2 &&;i++){
        
            if(a[i]>a[i+1]){
                flag =1;
                break;
            }
        
    }
    if(flag==1){
        cout<<"Not sorted in ascending order"<<endl;
    }
    else{
        cout<<"Sorted";
    }
    return 0;
}