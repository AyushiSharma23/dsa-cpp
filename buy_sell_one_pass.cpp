#include <iostream>
using namespace std;

int maxProfit(int prices[],int n){
    int best=0;
    int lowest=0;
    for(int i=0;i<n;i++){
            if(prices[i]<prices[lowest]){
                lowest=i;

            }
        
            if(prices[i]-prices[lowest]>best){
                best=prices[i]-prices[lowest];
            }
        
    }
    
    return best;
}
int main(){
    int best;
    int prices[]={1};
    int n=sizeof(prices)/sizeof(prices[0]);
    best=maxProfit(prices,n);
    cout<<"max profit: "<<best;
    return 0;


}