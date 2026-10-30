#include <iostream>
using namespace std;

int maxProfit(int prices[],int n){
    int best=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(prices[j]-prices[i]>best){
                best=prices[j]-prices[i];
            }
        }
    }
    
    return best;
}
int main(){
    int best;
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(prices[0]);
    best=maxProfit(prices,n);
    cout<<"max profit: "<<best;
    return 0;


}