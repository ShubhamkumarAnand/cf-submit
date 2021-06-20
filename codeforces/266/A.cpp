#include <iostream>
 
using namespace std;
 
int main()
{
    char ch[50];
    int count = 0, n;
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        cin >> ch[i];
        if (ch[i - 1] == ch[i]) {
            count++;
            }
        }
    cout << count;
    return 0;
}