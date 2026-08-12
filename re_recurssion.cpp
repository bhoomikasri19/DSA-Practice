#include <iostream>
using namespace std;

//run g++ re_recurssion.cpp -o re_recurssion
//./re_recurssion 


//print name
// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<"Bhoomika"<<endl;
//         print(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

//print number 1-n
// void print2(int i,int n){
//     if(i>n) return;
//     else cout<<i<<endl;
//     print2(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print2(1,n);
// }

//print n-1
// void print3(int i,int n){
//     if(i<1) return;
//     else cout<<i<<endl;
//     print3(i-1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print3(n,n);
// }

//print 1-n backtracking
// void print4(int i,int n){
//     if(i<1) return;
//     print4(i-1,n);
//     cout<<i<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print4(n,n);
// }

//print n-1 backtracking
// void print5(int i,int n){
//     if(i>n) return;
//     print5(i+1,n);
//     cout<<i<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print5(1,n);
// }

//sum of first n number parameterized way
// void print6(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     print6(i-1,sum+i);
// }
// int main(){
//     int n;
//     cin>>n;
//     print6(n,0);
// }

//sum of first n number functional way
// int print7(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+print7(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<print7(n);
// }

//factorial parameterized way
// void print8(int i,int fact){
//     if(i<1){
//         cout<<fact;
//         return;
//     }
//     print8(i-1,fact*i);
// }
// int main(){
//     int n;
//     cin>>n;
//     print8(n,1);  
// }

//factorial functional way
// int print9(int n){
//     if(n==0) return 1;
//     return n*print9(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<print9(n);
// }

//reverse array
// void print10(int l,int r,int arr[]){
//     if(l>=r) return;
//     swap(arr[l],arr[r]);
//     print10(l+1,r-1,arr);
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     print10(0,n-1,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//reverse array pointer
// void print11(int i,int n,int arr[]){
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     print11(i+1,n,arr);
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     print11(0,n,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//palindrome
// bool print12(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if (s[i]!=s[s.size()-i-1]) return false;
//     return print12(i+1,s);
// }
// int main(){
//     string s="madam";
//     cout<<print12(0,s);
// }

//print name 5 times

// void print(int i,int n){
//     if(i>n) return;
//     else cout<<"bhoomika"<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// void print(int i,int n){
//     if(i>n) return;
//     else cout<<i<<endl;
//     print(i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// void print(int i,int n){
//     if(i<1) return;
//     else cout<<i<<endl;
//     print(i-1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
// }

// void print(int i,int n){
//     if(i<1) return;
//     print(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
// }

// void print(int i,int n){
//     if(i>n) return;
//     print(i+1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// void print(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     print(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,0);
// }

// int print(int n){
//     if(n==0) return 0;
//     else return n+print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<print(n)<<endl;
// }

// int print(int n){
//     if(n==0) return 1;
//     else return n*print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<print(n)<<endl;
// }

// void print(int i,int fact){
//     if(i<1){
//         cout<<fact<<endl;
//         return;
//     }
//     print(i-1,fact*i);

// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,1);
// }

// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     else {
//         cout<<"bhoomika"<<endl;
//         print(i+1,n);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     print(,n);
// }

// void print(int i,int n){
//     if(i>n) return;
//     else cout<<i<<endl;
//     print(i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// void print(int i,int n){
//     if(i<1) return;
//     else cout<<i<<endl;
//     print(i-1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
// }

// void print(int i,int n){
//     if(i<1) return;
//     print(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
// }

// void print(int i,int n){
//     if(i>n) return;
//     print(i+1,n);
//     cout<<i<<endl;

// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);

// }

//sum of n number

// void print(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     print(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,0);
// }

//functional way

// int sum(int n){
//     if (n==0) return 0;
//     return n+sum(n-1);

// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

//factorial

// void print(int i,int fact){
//     if(i<1) {
//         cout<<fact<<endl;
//         return;
//     }
//     print(i-1,fact*i);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,1);
// }


//fuctional

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}