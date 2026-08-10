#include<iostream>
using namespace std;

// void func(){
//     cout<<"1";
//     func();
// }

// int main(){
//     func();
// }


// int cnt=0;
// void print(){
//     if(cnt == 3) return;
    
//     cout<<cnt<<endl;
//     cnt++;
//     print();

// }

// int main(){
//     print();
//     return 0;
// }

// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"Bhoomi"<<endl;
//     print(i+1,n);
// }

// int main(){
//     int n;
//     cin>>n;

//     print(1,n);
// }

// void print(int i,int n){
//     if(i<1){
//         return;
//     }
//     cout<<i<<endl;
//     print(i-1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,1);
// }

// void print(int i,int n){
//     if(i<1){
//         return;
//     }
//     print(i-1,n);
//     cout<<i;
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

// void print(int i,int sum,int n){
//     if(i>n){
//         cout<<sum;
//         return;

//     }
//     print(i+1,sum+i,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(1,0,n);
// }

// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+print(n-1);

// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<print(n);
// }

// void fact(int i,int mul){
//     if(i<1){
//         cout<<mul;
//         return;
//     }
//     fact(i-1,mul*i);
// }



// int main(){
//     int n;
//     cin>>n;
//     fact(n,1);
// }

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


//Reverse an array

// void reverse(int arr[],int l,int r){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     reverse(arr,l+1,r-1);
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     reverse(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"";
//     }

// }

//1 variable reverse arr

// void reverse(int arr[],int i,int n){
//     if(i>=n/2){
//         return ;

//     }
//     swap(arr[i],arr[n-i-1]);
//     reverse(arr,i+1,n);

// }


// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     reverse(arr,0,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

//Palindrome

// int palin(string &s,int i,int n){
//     if(i>=n/2){
//         return true;
//     }
//     if(s[i]!=s[n-i-1]){
//         return false;
//     }
//     return palin(s,i+1,n);
// }

// int main(){
//     string check;
//     cin>>check;
    
//     if (palin(check,0,check.length())){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"Not a palindrome";
//     }
// }


//Fibonacci

//Normal for loop

// int f[100];
// f[0]=0;
// f[1]=1;
// for(int i=2;i<n;i++){
//     f[i]=f[i-1]+f[i-2];
// }

//recursion

int f(int n){
    if(n<=1){
        return n;
    }
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}

int main(){
    int n=4;
    cout<<(f(4));

}