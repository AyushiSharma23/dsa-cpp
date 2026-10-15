#include <iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int target=5;
    int found=0;
    int b= -1;
    int c= -1;
   for(int i=0;i<n && !found ;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                found=1;
                b=i;
                c=j;
               
                break;
            }
          
        }
       
    }
    if(found ==1){
       cout<<"("<<b<<","<<c<<")"<<endl;
    }
    else{
        cout<<"no pair"<<endl;
    }
   
    return 0;
}