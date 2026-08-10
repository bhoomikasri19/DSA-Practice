#include <iostream>
using namespace std;
//for outer loop count no of row
//for inner loop count no of column and connect them somehow to row

//1st

// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }


// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// void print3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// void print4(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print5(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print6(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print7(int n){
//     for(int i=0;i<n;i++){
//         //spaces
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         //spaces
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print8(int n){
//     for(int i=0;i<n;i++){
//         //spaces
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         //stars
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         //spaces
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print10(int n){
//     for(int i=0;i<2*n-1;i++){
//         int stars=i;
//         if(i>=n){
//             stars=2*n-i-2;
//         }
//         for(int j=0;j<=stars;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void print11(int n){
//     int start=1;
//     for(int i=0;i<n;i++){
//         if(i%2==0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout<<start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }

// void print12(int n){
//     for(int i=1;i<=n;i++){
//         //number
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         //space
//         for(int j=1;j<2*n-(2*i);j++){
//             cout<<" ";
//         }
//         //number
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// void print13(int n){
//     int num=1;
//     for(int i=1;i<=n;i++){      
//         for(int j=1;j<=i;j++){       
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }

// void print14(int n){
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// void print15(int n){
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<=n-i-1;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// void print16(int n){
//     for(int i=0;i<n;i++){
//         char ch='A'+i;
//         for(int j=0;j<=i;j++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// void print17(int n){
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //alpha
//         char ch='A';
//         int breakpoint=(2*i+1)/2;
//         for(int j=1;j<=2*i+1;j++){
//             cout<<ch;
//             if(j<=breakpoint) ch++;
//             else ch--;
//         }
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// void print18(int n){
//     for(int i=0;i<n;i++){
//         for(char ch='E'-i;ch<='E';ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// void print19(int n){
//     int spaces=0;
//     for(int i=0;i<n;i++){
//         //star
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0;j<spaces;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         spaces+=2;
//         cout<<endl;
//     }
//     spaces=8;
//     for(int i=1;i<=n;i++){
//         //star
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0;j<spaces;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         spaces-=2;
//         cout<<endl;
//     }
// }

void print19(int n){
    for(int i=1;i<=2*n-1;i++){
        
    }
}

int main(){
    int n;
    cin>>n;
    print19(n);
}