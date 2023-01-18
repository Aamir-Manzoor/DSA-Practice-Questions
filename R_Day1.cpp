// #include <iostream>
// using namespace std;
// // Sum of two Numbers?
// int main(){
//     int a = 2;
//     int b = 3;
//     cout << a + b;

// // Calculate Simple Interest?
// int p,r,t;
//     cout << "Enter profit , Rate , Time"<<endl;
//     cin>>p>>r>>t;
//     int ans = (p*r*t)/100;
//     cout << ans;

// // Avg of 3 Numbers?
//  int a =3, b= 4, c=5;
//     int avg =(a+b+c)/3;
//     cout <<"Avg of given numbers is:- "<<avg;
// // Is a>b print Yes or No
//   int a=4, b=3;
//    if(a>b){
//     cout << "yes";
//    }else{
//     cout << "No";
//    }

// // Even or odd?
//  int a;
//  cout << "Enter The Number"<<endl;
//  cin>>a;
//  if(a%2==0){
//     cout<<"It is an Even Number";
//  }else{
//     cout<<"It is an Odd Number";
//  }

// // check Number is +ve -ve or 0? 
//  int a;
//  cout << "Enter The Number"<<endl;
//  cin>>a;
//  if(a>0){
//     cout << "The Number is Positive";
// }else if(a<0)
// {
//     cout << "The Number is Negative";
// }else{
//     cout << "The Number is Zero";
// }

// // Triangle or not?
// int A, B ,C;
// cout << "Enter the Values of A B and C"<<endl;
// cin>>A>>B>>C;
// if(A+B>C){
//     cout<<"It is a  Triangle";
// }else if(B+C>A){
//     cout<<"It is a  Triangle";
// }else if (C+A>B)
// {
//  cout<<"It is a  Triangle";
// }
// // Print 0 to n Numbers?
// int n;
// cout<<"Enter the Number";
// cin>>n;
// for(int i=0;i<=n;i++){
//      cout<<i<<endl;
// }

// // Print Even Numbers Using Loops?
// int n;
// cout<<"Enter the Number";
// cin>>n;
// int num=2;
// while(num<=n){
//     if(num%2==0){
//         cout<<num<<endl;
//     }
//     num = num+2;
// }
// USING for LOOP
// int n;
// cout<<"Enter the Number";
// cin>>n;
// for(int i=1; i<=n; i++){
//     if(i%2==0){
//         cout<<i<<endl;
//     }
// }

// // Print Odd Numbers?
// int n;
// cout<<"Enter the Number";
// cin>>n;
// for(int i=0; i<=n; i++){
//     if(i%2==1){
//         cout<<i<<endl;
//     }
// }
// // USING WHILE LOOP
// int n;
// cout<<"Enter the Number";
// cin>>n;
// int num=1;
// while(num<=n){
//     if(num%2==1){
//         cout<<num<<endl;
//     }
//     num = num+2;
// }

// // SUM OF N NUMBERS
// int n;
// cout<<"Enter the Number";
// cin>>n;
// int sum = 0;
// for(int i =0 ;i<=n; i++){
//     sum = sum +i;
// }
// cout<<"Total sum = "<<sum ;

// // FACTORIAL OF A GIVEN NUMBER 
// int n;
// cout<<"Enter the Number";
// cin>>n;
// int fact = 1;
// for(int i =1 ;i<=n; i++){
//     fact = fact * i;
// }
// cout<<"factorial of given NO. is = "<< fact ;

// // CHECK NUMBER IS PRIME OR NOT?
// int n;
// cout<<"Enter the Number";
// cin>>n;
// int num = 2;
// while(num<n){
//     if(n%num==0){
//         cout<<"Not Prime";
//         break;
//     }else{
//         cout<<"Prime";
// break;
//     }
//     num++;
// }

// // CONDITIONALS
// int A, B;
// cout<<"Enter the value of A and B :- ";
// cin>>A>>B;
// if(A>B){
//     cout<<"Answer is A";
// }else if(B>A){
//     cout<<"Answer is B";
// }

// //CASES OF UPPER AND LOWER CASE LETTERS
// char ch;
// cout<<"Enter The character"<<endl;
// cin>>ch;
// if(ch>64 && ch<91){
//     cout << "This is Upper Case";
// }else if(ch>96 && ch<123){
//     cout << "this is lower case";
// }else{
//     cout<<"this is Numeric";
// }

// // 1 TO N USING WHILE
//  int n;
//  cout << "Enter The Number"<<endl;
//  cin>>n;
//  int i=1;
//  while(i<=n){
//     cout<<i<<" ";
//     i= i+1;
//  }
// //USING FOR LOOP
//  int n;
//  cout << "Enter The Number"<<endl;
//  cin>>n;
// for(int i=1;i<=n;i++){
//     cout<<i<<" ";
//  }

//// sum of N numbers using While Loop
//  int n;
//  cout << "Enter The Number"<<endl;
//  cin>>n;
// int i=1;
// int sum=0;
// while(i<=n){
//     cout << i<<" ";
//     sum=sum+i;
//     i= i+1;
// }
// cout << endl;
// cout << "total sum is = "<<sum;

// // SUMOF N EVEN NUMBERS
//  int n;
//  cout << "Enter The Number"<<endl;
//  cin>>n;
// int i=2;
// int sum=0;
// while(i<=n){
//     cout << i<<" ";
//     if(i%2==0){
//         sum = sum +i;
//     }
//     i= i+2;
// }
// cout << endl;
// cout << "total sum is = "<<sum;

// // Farenheit to celcius
// int f;
// cout << "Enter the temp in farenhiet :- ";
// cin>>f;
// int faren = ((f-32)*5)/9;
// cout<<"Temp in Celcius is "<<faren;
