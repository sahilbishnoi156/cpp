#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}
int sum(int a, int b, int c) {
    return a+b+c;
}
int sum(int a, int b, int c, int d) {
    return a+b+c+d;
}

int main(){
    int n;
    cin>>n;
    if(n==2){
    cout<<sum(1,2)<<endl;
    }
    else if(n==3){
    cout<<sum(1,2,3)<<endl;
    }
    else if(n==4){
    cout<<sum(1,2,3,4)<<endl;
    }
    return 0;
}
