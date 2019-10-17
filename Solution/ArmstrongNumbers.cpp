#include<bits/stdc++.h>
using namespace std; 

int main() {
    int interval, sum, len;
    string aux, num;
    cin>>interval;

    cout<< "Armstrong numbers from 0 to "<<interval<<": "<<endl;
    for(int i=0; i<=interval; i++){
        sum = 0;
        num = to_string(i);
        len = num.length();
        for(int j=0; j<len; j++){
            aux = num[j];
            sum += pow(atoi(aux.c_str()), len);
        }
        if(sum == i){
            cout<< i <<endl;
        }
    }

    return 0;
}