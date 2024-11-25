#include <iostream>
using namespace std;

int main() {
    int res=-1;
    int n;
    cin >> n;
    for (int ind=0; ind<n; ind++) {
        int element;
        cin>>element;
        if (res==-1 && element>=0){
            res=ind;
        }
    }
    cout<<res;
}
