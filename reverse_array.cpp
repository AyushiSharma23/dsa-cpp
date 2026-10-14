#include <iostream>
using namespace std;
void swapping(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swapping(arr[i],arr[j]);
        i++;
        j--;
    }

}

int main(){
    int arr1[]={1,2,3,4,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    reverseArray(arr1,n1);
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
        
    }
    cout<<endl;
    int arr2[]={1,2,3,4};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    reverseArray(arr2,n2);
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
        
    }
    return 0;
}