#include <iostream>
using namespace std;
int main(){
    int N,sum=0,nsum=0 ;

    
    cin>>N;
    for(int i=0 ;i<=N;i++){
        sum+=i;
    }
    for(int i=0; i<N;i++){
        nsum=nsum+i;
    }
    cout<<"sum :"<<sum;
    cout<<"nsum :"<<nsum;


    cout<<"\n";
    return 0;
}