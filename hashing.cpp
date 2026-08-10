#include <iostream>
#include <map>
using namespace std;

//Normal for loop counting

// int count(int num,int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==num) count++;
//     }
//     return count;
// }

// int main(){
//     int num=1;
//     int arr[5]={1,2,1,1,3};
//     int n=5;
//     cout<<count(num,arr,n);
// }


//Hashing

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     //precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         //fetch
//         cout<<hash[number]<<endl;

//     }
// }


// Character hashing

// int main(){
//     string s;
//     cout<<"Enter your string:";
//     cin>>s;

//     //precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }



//     int q;
//     cout<<"Enter no of queries:";
//     cin>>q;
//     while(q--){
//         char c;
//         cout<<"Enter your character:";
//         cin>>c;
//         //fetching
//         cout<<hash[c-'a']<<endl;
//     }
// }

//map

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;
    cin>>q;
    while(q--){
        int numb;
        cin>>numb;
        //fetching
        cout<<mpp[numb];
    }
}