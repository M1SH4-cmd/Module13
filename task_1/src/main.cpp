#include <iostream>
#include <vector>

using namespace std;

vector<int> removeElement(vector<int> vec, int x) {
    vector<int> result = vec;

    for (int i = 0; i < result.size(); ) {
        if (result[i] == x) {
            result.pop_back();
            result.resize(result.size() - 1);
        } else {
            i++;
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Input vector size: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Input numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int x;
    cout << "Input number to delete: ";
    cin >> x;

    vector<int> result = removeElement(vec, x);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
