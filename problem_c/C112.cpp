#include <iostream>

#define N 24

using namespace std;

int main() {
    int n, tmp;
    int c1, c2, f;
    int min = 10000;
    int max = 0;

    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c1;
        cin >> f;
        cin >> c2;

        tmp = c1 + f;
        tmp += N - c2;

        if(i == 0) {
            min = max = tmp;
        } else if(tmp < min) {
            min = tmp;
        } else if(tmp > max) {
            max = tmp;
        }
    }

    cout << min << endl << max << endl;
}