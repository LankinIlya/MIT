#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n == 2){
        return 1;
    }
    if(n == 1){
        return 0;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    cout << "Hello world!" << endl;
    int n;
    cout << "¬ведите номер члена последовательности:" << endl;
    cin >> n;
    cout << fib(n);
}
