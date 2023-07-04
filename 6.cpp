#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}

int main(){

    int a,b;
    cout<<"Enter Two Number For Swaping: ";
    cin>>a>>b;
    swap(a,b);

    return 0; 
}