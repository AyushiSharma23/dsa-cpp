#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
int main(){
    int a[]={2,6,33,8,17};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    int second_largest=INT_MIN;
    if(n==1){
        cout<<"only one element in array"<<endl;
        return 0;
        
    }
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            second_largest =largest;
            largest=a[i];
        }
        if(a[i]<largest && a[i]>second_largest){
            second_largest=a[i];
        }
     

    }
    if(second_largest==INT_MIN){
            cout<<"no second large exists"<<endl;
            return 0;
            
        }
   
    cout<<"Second largest="<<second_largest<<endl;
    return 0;
}