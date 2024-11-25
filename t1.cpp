#include <iostream>
using namespace std;

int main() {
    int res=1; // будет правильно, если в вводе гарантировано будет хотя бы одно отрицательное число
    int n=1;
    while (n!=0) {
        cin >> n;
        if (n<0) {res*=n;}
    }
    cout<<res;
}

