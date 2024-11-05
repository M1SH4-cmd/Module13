#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> prices {2.5, 4.25, 3.0, 10.0};

    vector<int> items {1, 1, 0, 3};

    float totalCost = 0.0;

    for (int index : items) {
        if (index >= 0 && index < prices.size()) {
            totalCost += prices[index];
        }
    }

    cout << "Total cost:\t" << totalCost << endl;

    return 0;
}
