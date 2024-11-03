#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {};
    int q;
    int count = 0;
    cin >> q;
    while(q != -1){
        if(q == 1){
            cout << "Type in your number N:\t";
            cin >> q;
            nums.push_back(q);
            ++count;
            cout << "Number added successfully!" << endl;
        }else if(q == 2){
            nums.clear();
            cout << "Vector was cleared" << endl;
        }else if(q == 3){
            cout << "Number of additions:\t" << count <<endl;
        }else{
            cout << "Invalid option" << endl;
            return 0;
        }
        cin >> q;
    }
}