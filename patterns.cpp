#include <iostream>
using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print1(n);

    
// }

// void print2(int n){
//     for (int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print2(n);
// }


// void print3(int n){
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print3(n);
// }

// void print4(int n){
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print4(n);
// }

// void print5(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<"*"<<"";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print5(n);
// }

// void print6(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j<<"";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the input";
//     cin>>n;
//     print6(n);
// }

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     print7(n);
// }

// void print8(int n){
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     print7(n);
//     print8(n);
// }

void print9(int n){
    for(int i=0;i<2*n-1;i++){
        int stars=i;
        if (i>n){
            stars=2*n-i;
        }
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;

        }
        cout<<endl;
    }
}

void print12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }


        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }


        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}

void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;


    }
}

void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    print16(n);
}

