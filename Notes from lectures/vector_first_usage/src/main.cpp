#include <iostream>
#include <vector>
using namespace std;


int main(){
    cout << "How many elements do you want to save?:" << endl;
    int n;
    cin >> n;
    vector<float> vec1(n);

    for(int i = 0; i < n; i++){
        cin >> vec1[i];
        cout << "Element saved." << endl;
    }

    float mult = 1;
    for(int i = 0; i < n; i++){
        mult *= vec1[i];
    }
    cout << "Multiplication = " << mult << endl;

}