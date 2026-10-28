#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
int main() {
    int n ;
     cin>>n;
    Solution sol;
    sol.pattern(n);
    }