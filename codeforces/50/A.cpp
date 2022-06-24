#include <iostream>
 
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;

    int total_areas = m * n;
    int piece = total_areas / 2;

    cout << piece << endl;
    return 0;
}