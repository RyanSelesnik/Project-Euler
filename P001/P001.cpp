#include <iostream>

#define TARGET 999

int sumDivisibleBy(int n) {
    int p = TARGET / n;
    return n * (p * (p + 1) / 2);
}

int main() {

    // A naive solution is
    int sum = 0;
    for(int i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;

    // However, we can do better. If you recall from basic high school mathematics, finite sums can be 
    // simplified to 1 + 2 + 3 + ... + n = n/2 * (n + 1).

    std::cout << sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15) << std::endl;
}
