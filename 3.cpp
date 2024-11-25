#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int mas[n];
    srand(time(0));
    for (int ind=0; ind<n; ind++) {
        mas[ind]=rand()%(b-a)+a; // интервал включительно?
        // rand()%(b-a+1)+a   - всё включительно
        // rand()%(b-a)+a+1   - a не включительно, b включительно
        // rand()%(b-a)+a     - a включительно, b не включительно
        // rand()%(b-a-1)+a+1 - всё не включительно
    }
    for (int resind=0; resind<n; resind++) {
        if (mas[resind]<(*max_element(mas,mas+n)+*min_element(mas,mas+n))/2.) {
            cout<<mas[resind]<<" ";
        }
    }
}
