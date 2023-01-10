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
if (x < 2)
{
    return x;
}else
{
    return fibonacci(x-1) + fibonacci(x-2);
}
}