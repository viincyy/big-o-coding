#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
 
    int count = 0;
    for (int i = 0, j = 0; i < n && j < m; j++) {
        if (b[j] >= a[i]) {
            count++;
            i++;
        }
    }
 
    cout << n - count;
    return 0;
}