#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n < 3){
        return 1;
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
