#include <iostream>
using namespace std;
 
int main() {
    int a[10][10];
    int count = 0;
    int k = 0;
    int l = 0;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            }
        }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (a[i][j] == 1) {
                k = i;
                l = j;
                break;
                }
            }
        }
    
    while (k != 3) {
        if (k < 3) {
            count++;
            k++;
            }
        else if (k > 3) {
            count++;
            k--;
            }
        }
    while (l != 3) {
        if (l < 3) {
            count++;
            l++;
            }
        else if (l > 3) {
            count++;
            l--;
            }
        }

    cout << count;
    return 0;
}