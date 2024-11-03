#include <iostream>
#include <vector>
using namespace std;

vector<int> eraseElements(vector<int> vec, int x){
    for(int i = 0; i < vec.size();){
        if(vec[i] == x){
            vec.erase(vec.begin() + i);
        }else{
            ++i;
        }
    }

    return vec;
}


int main(){
    int n;
    cout << "Enter the size of vector" << endl;
    cin >> n;
    vector<int> vec1(n);

    cout << "Enter your numbers below:" << endl;

    for(int i = 0; i < vec1.size(); i++){
        cin >> vec1[i];
    }

    cout << "Type a number to delete: ";
    int x;
    cin >> x;


    for(int i = 0; i < eraseElements(vec1, x).size(); i++){
        cout << eraseElements(vec1, x)[i] << " ";
    }
}