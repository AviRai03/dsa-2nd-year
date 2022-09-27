#include <iostream>
#include <vector>
using namespace std;
int main() {
   
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> a(n);
    
    for (int i = 0; i < n; i++) {
       
        int k;
        cin >> k;
       
        a[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
       for (int q_num = 0; q_num < q; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}


link:https://www.hackerrank.com/challenges/variable-sized-arrays/submissions/code/292862324
