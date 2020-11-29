#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input N (range is (0; 27)): ";
    cin >> n;
    if (n > 0 && n < 27) {
        for (int i = 100; i <= 999; i++) {
            if ((i / 100 + (i % 100) / 10 + i % 10) == n){
                cout << i << endl;
            }
        }
    }
    else
        cout << "N must be grower than 0 and lower than 27!";
    system("pause");
}