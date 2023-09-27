#include <iostream>
#include <tuple>

void bankers_problem(int bill){
    int a = 5, b = 10, c = 20, d = 50, e = 100, f = 200, g = 500;
    tuple<int, int, int, int, int, int, int> bills = make_tuple(a, b, c, d, e, f, g);

    while (bill != 0){
        if (bill >= g){
            bill -= g;
        }
        else if (bill >= f){
            bill -= f;
            std::cout << "200€" << std::endl;
        }
        else if (bill >= e){
            bill -= e;
            std::cout << "100€" << std::endl;
        }
        else if (bill >= d){
            bill -= d;
            std::cout << "50€" << std::endl;
        }
        else if (bill >= c){
            bill -= c;
            std::cout << "20€" << std::endl;
        }
        else if (bill >= b){
            bill -= b;
            std::cout << "10€" << std::endl;
        }
        else if (bill >= a){
            bill -= a;
            std::cout << "5€" << std::endl;
        }
        else{
            std::cout << "Error" << std::endl;
            break;
        }
    }

}

int main() {
    int x;

    std::cout << "Enter value of your bill in €" << std::endl;
    std::cin >> x;

    return 0;
}
