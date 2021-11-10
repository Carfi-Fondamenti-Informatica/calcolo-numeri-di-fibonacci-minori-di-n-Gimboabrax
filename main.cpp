#include <iostream>
using namespace std;

int main() {
    int n=0,m=1,r=0,a=1;
    cin >> n;
    cout << a << endl;
    cout << m << endl;
    for(int i=2; i<n; i++) {
        r = m + a;
        if(r<=n) {
            cout << r << endl;
        }
        a = m;
        m = r;

    }

    return 0;
}
