#include <iostream>
using namespace std;

int removeDuplicates(int a[],int n){
    int pos=1;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;

    }
    
    for(int i=1;i<n;i++){
        if(a[i]!=a[pos-1]){
            a[pos]=a[i];
            pos++;

        }
    }
    
  
    return pos ;


}
int main(){
    int a[]={1,1,2,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    int pos;
    pos= removeDuplicates(a,n);
    cout<< "no. of unique elements:"<<pos<<endl;
    for(int i=0;i<pos;i++){
        cout<<a[i]<<" ";
       
    }
     cout<<endl;
    
  
    return 0;
}