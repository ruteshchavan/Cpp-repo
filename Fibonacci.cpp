// WAP to print fibonacci series

#include<iostream>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;
    int c;

    for(int i=1;i<=n;i++){
        cout<<a<<endl;   
        c=a+b; 
        a=b; 
        b=c; 
    }
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    fib(n);
    return 0;
}
