#include<bits/stdc++.h>

using namespace std;

void fib(int n){
    int a = 0;
    int b = 1;
    for(int i = 0; i < n; i++){
        cout << a << endl;
        b = a + b;
        a = b - a;
    }
}

int main(){
    cout << "Hello world!" << endl;
    int n;
    cout << "¬ведите номер члена последовательности:" << endl;
    cin >> n;
    fib(n);
}
