#include <iostream>

const int N = 12;

unsigned int money[N] = {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 2, 1};

void calculate(unsigned int val, int n, unsigned int currency[],unsigned int res[]){
    unsigned int p;

    for (int i = 0; i < n ; ++i) {
        p = val / currency[i];
        res[i] = p;
        val = val - p * currency[i];
    }
}

void print(unsigned int val, int n, unsigned int *currency ,unsigned int *res){
    std::cout << val << " = \n";
    for (int i = 0; i < n; ++i) {
        if(res[i] > 0)
    }

}

int main() {
    unsigned int amount;
    unsigned int result[N];


    std::cout << "Enter value of your bill in CZK" << std::endl;
    std::cin >> amount;
    calculate(amount, N, money, result);
    print(amount, N, money, result);

    return 0;
}
