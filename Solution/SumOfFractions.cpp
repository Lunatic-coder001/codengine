#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n;
    float sum = 0;
    cin>> n;

    for(int i=1; i<=n ; i++){
        sum += (float)1/i;
    }

    cout<<"Sum: "<<sum<<endl;

    return 0;
}