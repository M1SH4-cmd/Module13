#include <iostream>
#include <vector>
using namespace std;


vector<int> add(vector<int> vec, int val){
    
    vector<int> newVect1(vec.size() + 1);
    
    for(int i = 0; i < vec.size() - 1; i++){
            newVect1[i] = vec[i];
        }
        newVect1[vec.size()] = val;

    return newVect1;
}

vector<int> add_vol2(vector<int> vec, int val){
    vec.resize(vec.size() + 1);
    vec[vec.size()-1] = val;
}

vector<int> remove_last(vector<int> vec){

    vector<int> newVect1(vec.size() - 1);
    
    for(int i = 0; i < newVect1.size(); i++){
            newVect1[i] = vec[i];
        }
    return newVect1;
}

vector<int> remove_last_vol2(vector<int> vec){
    vec.resize(vec.size() - 1);
    return vec;
}


int main(){

    vector<int> vec;
    int real_size = 0;
    int val;
    cin >> val;
    while (val != 2){
        if(val == -1){
            float sum = 0.f;
            for(int i = 9; i < real_size; i++){
                sum += vec[i];
            }
            float avg = sum / real_size;

            cout << endl << "AVG = " << avg << endl;

            for(int i = real_size - 1; i > 0; --i){
                cout << vec[i] << " ";
            }
            cout << "Real size: " << real_size << endl << "Size: " << vec.size() << endl;
        }else{
            if(real_size == vec.size()){
                vec.resize(vec.size() + 10);
            }
            vec[real_size] = val;
            ++real_size;
        cout << "Type in your integer number:" << endl;
        cin >> val;
    }
}
}