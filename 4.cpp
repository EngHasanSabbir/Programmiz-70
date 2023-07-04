#include<bits/stdc++.h>
using namespace std;

int divi(int a,int b){

int div = a/b;
return div;
}


int reminder(int a,int b){

int rim = a%b;
return rim;
}

int main(){
int dividend,divisor;
cout<<"Enter the Dividend: ";
cin>>dividend;
cout<<"Enter the  Divisor: ";
cin>>divisor;

cout<<"Your Quotient is: "<<divi(dividend,divisor)<<endl;
cout<<"Your Reminder is: "<<reminder(dividend,divisor)<<endl;



}
