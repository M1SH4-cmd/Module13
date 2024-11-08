#include <iostream>
#include <vector>

using namespace std;

vector<int> removeElement(vector<int> vec, int x) {
    for (int i = 0 ; i < vec.size(); ++i) {
        if (vec[i] == x) {
            for (int j = i; j < vec.size() - 1; ++j) {
                vec[j] = vec[j + 1];
            }
            vec.pop_back();
            i -= 1;
        }
    }

    return vec;
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
