#include <iostream>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num < min_val) {
            min_val = num;
        }

        if (num > max_val) {
            max_val = num;
        }
    }

    cout << min_val << " " << max_val << endl;

    return 0;
}
