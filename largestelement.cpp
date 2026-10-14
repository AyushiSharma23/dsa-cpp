#include <iostream>
using namespace std;

int main(){
    int a[]={4};
    int n=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];

        } 

    }
    cout<<"largest element in array is:"<<largest<<endl;
    return 0;
    

}