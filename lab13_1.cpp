#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int x){
    if(x == 0) return x=0;
    else if(x == 1) return x=1;
    else if(x > 1) {
    return x=fibonacci(x-1) + fibonacci(x-2);
    }
    else return 0;
}   