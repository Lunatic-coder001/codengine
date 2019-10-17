#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n;
    int sum = 0;
    string i = "1";
    cin>> n;

    for(int it=0; it<n ; it++){
        sum += atoi(i.c_str());
        i += "1";
    }

    cout<<"Sum: "<<sum<<endl;

    return 0;
}