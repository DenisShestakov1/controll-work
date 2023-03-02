#include<iostream>
int main() {
    int num;
    int b=0;
    std::cout << "vedite number";
    std::cin >> num;
    for (int i = -1; i >= num; i -= 2) {
        b += i;
    }
    std::cout << b;
}
