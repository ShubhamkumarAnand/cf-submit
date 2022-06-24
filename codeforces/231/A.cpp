#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--) {
        int sum = 0;
        int a[3];

        for (int i = 0; i < 3; i++) {
            cin>>a[i];
            }
        
        for (int i = 0; i < 3; i++) {
            sum += a[i];
            }
        if (sum >= 2) {
            count++;
            }
        }
    cout << count;
    return 0;
}