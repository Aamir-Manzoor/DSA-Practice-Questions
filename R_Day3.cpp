
#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}

/*
Q1:- Substract the product and sum of digits of an  interger (1281 leetCode)
int n;
cout<<"Enter The Number;- ";
cin>>n;

int p = 1;
int sum=0;

while(n!=0){
    int digit= n%10;
    p = p*digit;
    sum = sum + digit;

    n = n/10;
}
int ans = p - sum;

cout << ans;

Q2:- NUmber of 1Bits (191 leetcode)
   int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout << count;


*/
