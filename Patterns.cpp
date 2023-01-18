#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the Value of n :- ";
  cin >> n;
int row=1;
while(row<=n){
  int col=1;
  while(col<=n-row+1){
    cout<<col;
    col++;
  }

  int col1 = 2;
  while(col1<=row){
    cout<<"*";
    col1++;
  }

   int col2 = 2;
  while(col2<=row){
    cout<<"*";
    col2++;
  }

  int col3=1;
  while (col3<=n-row+1)
  {
    cout<<n-col3-row+2;
    col3++;
  }

  cout<<endl;
  row++;
}
}

// ---------Ist Pattern-------------//
//   int n;
//     cout<<"Enter the Value of n:- ";
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while(col<=n){
//             cout<<"*"<<" ";
//             col++;
//         }
//         row++;
//         cout<<endl;
//     }

// ---------2nd Pattern-------------//
// int n;
// cout<<"Enter the Value of n:- ";
// cin>>n;
// int row=1;
// while (row<=n)
// {
//     int col=1;
//     while(col<=n){
//         cout<<row<<" ";
//         col++;
//     }
//     row++;
//     cout<<endl;
// }

// ---------3rd Pattern-------------//
// int n;
// cout << "Enter the Value of n:- ";
// cin >> n;
// int row = 1;
// while (row <= n)
// {
//     int col = 1;
//     while (col <= n)
//     {
//         cout << col << " ";
//         col++;
//     }
//     row++;
//     cout << endl;
// }

// ---------4th Pattern-------------//
//  int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             cout <<n-col+1<< " ";
//             col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------5th Pattern-------------//
// int n;
// cout << "Enter the Value of n:- ";
// cin >> n;
// int row = 1;
// int count = 1;
// while (row <= n)
// {
//     int col = 1;
//     while (col <= n)
//     {
//         cout <<count<< " ";
//         count++;
//         col++;
//     }
//     row++;
//     cout << endl;
// }

// ---------6th Pattern-------------//
//    int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout <<"*"<<" ";
//             col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------7th Pattern-------------//
//    int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout <<row<<" ";
//             col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------8th Pattern-------------//
//    int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     int count=1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row){

//             cout <<count<<" ";
//             count++;
//             col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------9th Pattern-------------//
// int n;
// cout << "Enter the Value of n:- ";
// cin >> n;
// int row = 1;
// int value = row;
// while (row <= n)
// {
//     int col = 1;
//     while (col <= row){
//         cout <<value<<" ";
//         value++;
//         col++;
//     }
//     row++;
//     cout << endl;
// }

// ---------10th Pattern-------------//
//   int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;

//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row){
//             cout <<row-col+1<<" ";
//             col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------11th Pattern-------------//
//    int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//           char ch ='A'+row-1;
//           cout << ch<<" ";
//           col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------12th Pattern-------------//
//   int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//           char ch ='A'+col-1;
//           cout <<ch<<" ";
//           col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------13th Pattern-------------//
//  int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     char ch ='A'+row-1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//           cout <<ch<<" ";
//           ch++;
//           col++;
//         }
//         row++;
//         cout << endl;
//     }

// ---------14th Pattern-------------//
// int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;

//     while (row <= n)
//     {
//         int col = 1;
//            char ch ='A'+row-1;
//         while (col <= n)
//         {
//           cout <<ch<<" ";
//           ch++;
//           col++;
//         }
//         row++;
//         cout<<endl;
//     }

// ---------15th Pattern-------------//
//  int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;

//     while (row <= n)
//     {
//         int col = 1;

//         while (col <= row)
//         {
//          char ch ='A'+row-1;
//           cout <<ch<<" ";
//           col++;
//         }
//         row++;
//         cout<<endl;
//     }

// ---------16th Pattern-------------//
//   int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;
//     char ch ='A'+row-1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//           cout <<ch<<" ";
//           ch++;
//           col++;
//         }
//         row++;
//         cout<<endl;
//     }

// ---------17th Pattern-------------//
//  int n;
//     cout << "Enter the Value of n:- ";
//     cin >> n;
//     int row = 1;

//     while (row <= n)
//     {
//         int col = 1;
//         char ch ='A'+row+col-2;

//         while (col <= row)
//         {
//           cout <<ch<<" ";
//           ch++;
//           col++;
//         }
//         row++;
//         cout<<endl;
//     }

// ---------17th Pattern-------------//
// int n;
// cout << "Enter the Value of n:- ";
// cin >> n;
// int row = 1;
// while (row <= n)
// {
//     int col = 1;
//     char ch ='A'+n-row+col-1;
//     while (col <= row)
//     {
//       cout <<ch<<" ";
//       ch++;
//       col++;
//     }
//     row++;
//     cout<<endl;
// }

// ---------18th Pattern-------------//
//   int n;
//   cout << "Enter the Value of n:- ";
//   cin >> n;
// int row=1;
// while(row<=n){
//   int space= n-row;
//   while(space){
//     cout<<" ";
//     space--;
//   }

//   int col=1;
//   while(col<=row){
//     cout<<"*";
//     col++;
//   }
//   cout<<endl;
//   row++;
// }

// ---------19th Pattern-------------//
//   int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
// int row=1;
// while(row<=n){
//   int col=1;
//   while(col<=n-row+1){
//     cout<<"*";
//     col++;
//   }
//   cout<<endl;
//   row++;
// }

// ---------20th Pattern-------------//
// int n;
// cout << "Enter the Value of n :- ";
// cin >> n;
// int row = 1;
// while (row <= n)
// {
//   int space = row-1;
//   while(space){
//     cout<<" ";
//     space--;
//   }
//   int col = 1;
//   while (col <= n - row + 1)
//   {
//     cout << "*";
//     col++;
//   }
//   cout << endl;
//   row++;
// }

// ---------21th Pattern-------------//
//  int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
//   int row = 1;
//   while (row <= n)
//   {
//     int space = row - 1;
//     while (space)
//     {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     while (col <= n - row + 1)
//     {
//       cout << row;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }

// ---------22th Pattern-------------//
//  int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
//   int row = 1;
//   while (row <= n)
//   {
//     int space = n - row;
//     while (space)
//     {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     while (col <= row)
//     {
//       cout << row;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }

// ---------23th Pattern-------------//
//  int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
//   int row = 1;
//   int count=1;
//   while (row <= n)
//   {
//     int space = n - row;
//     while (space)
//     {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     while (col <= row)
//     {
//       cout << count;
//       count++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }

// ---------24th Pattern-------------//
//  int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
//   int row = 1;
//   while (row <= n)
//   {
//     int space = n - row;
//     while (space)
//     {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     while (col <= row)
//     {
//       cout << col;
//       col++;
//     }
//     int start = row-1;
//     while(start){
//       cout<<start;
//       start--;
//     }
//     cout << endl;
//     row++;
//   }

// ---------25th Pattern-------------//
// int n;
//   cout << "Enter the Value of n :- ";
//   cin >> n;
// int row=1;
// while(row<=n){
//   int col=1;
//   while(col<=n-row+1){
//     cout<<col;
//     col++;
//   }

//   int col1 = 2;
//   while(col1<=row){
//     cout<<"*";
//     col1++;
//   }

//    int col2 = 2;
//   while(col2<=row){
//     cout<<"*";
//     col2++;
//   }

//   int col3=1;
//   while (col3<=n-row+1)
//   {
//     cout<<n-col3-row+2;
//     col3++;
//   }

//   cout<<endl;
//   row++;
// }