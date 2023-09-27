#include <iostream>

const int N = 12;

unsigned int money[N] = {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 2, 1};

void calculate(unsigned int val, int n, unsigned int res[]){
    unsigned int p;

    for (int i = 0; i < n ; ++i) {
        p = val / money[i];
        res[i] = p;
        val = val - p * money[i];
    }
}

void print(unsigned int val, int n, unsigned int *res){

}

int main() {
    unsigned int amount;
    unsigned int result[N];


    std::cout << "Enter value of your bill in CZK" << std::endl;
    std::cin >> x;

    return 0;
}
