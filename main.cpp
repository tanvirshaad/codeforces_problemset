#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = 0; j < 3; j++) {
            int p;
            cin >> p;
            sum += p;
        }
        if (sum >= 2) {
            counter ++;
        }
        else {
            counter;
        }


    }
    cout << counter;



    return 0;
}
