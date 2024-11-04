#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> db(20);

    int count = 0;
    int index = 0;

    while(true){
        int number;
        std::cout << "Input number: ";
        std::cin >> number;
        if (number == -1) {
            for (int i = 0; i < count; ++i) {
                std::cout << db[(index + i) % 20] << " ";
            }
            std::cout << std::endl;
            break;
        }

        db[index] = number;
        index = (index + 1) % 20;
        if (count < 20) {
            count++;
        }

    }
}
