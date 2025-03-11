#include <iostream>

int main(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    std::string n = std::to_string(a * b * c * d);
    n.length() == 1 ? std::cout << "0" << n[0] : std::cout << n[n.length() - 2] << n[n.length() - 1];
}