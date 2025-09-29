#include <iostream>
using namespace std;

int main(){
    int i, fact = 1, n;
    cout<<"Enter any number: ";
    cin>>n;
    
    for (i=1;i<=n;i++){
        fact *= i;
    }
    cout<<"Factorial is: "<<fact;
    return 0;
}