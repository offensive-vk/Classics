#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

struct Fraction {
    long long num, den;
    Fraction(long long n, long long d) : num(n), den(d) {
        long long g = std::gcd(num, den);
        num /= g;
        den /= g;
    }

    void print() const {
        std::cout << " - " << num << "/" << den << '\n';
    }
};

std::vector<int> continuedFraction(double value, int depth) {
    std::vector<int> cf;
    for (int i = 0; i < depth; ++i) {
        int intPart = static_cast<int>(std::floor(value));
        cf.push_back(intPart);
        value -= intPart;
        if (value == 0) break;
        value = 1.0 / value;
    }
    return cf;
}

std::vector<Fraction> getApproximations(const std::vector<int>& cf) {
    std::vector<Fraction> approximations;
    long long num_prev = 1, num = cf[0];
    long long den_prev = 0, den = 1;

    approximations.emplace_back(num, den);

    for (size_t i = 1; i < cf.size(); ++i) {
        long long new_num = cf[i] * num + num_prev;
        long long new_den = cf[i] * den + den_prev;
        approximations.emplace_back(new_num, new_den);

        num_prev = num;
        num = new_num;
        den_prev = den;
        den = new_den;
    }

    return approximations;
}

int main() {
    double input;
    int depth;

    std::cout << "Enter a number: ";
    std::cin >> input;

    std::cout << "Enter max depth: ";
    std::cin >> depth;

    auto cf = continuedFraction(input, depth);

    std::cout << "\nContinued fraction: [";
    for (size_t i = 0; i < cf.size(); ++i) {
        std::cout << cf[i];
        if (i == 0 && cf.size() > 1) std::cout << "; ";
        else if (i != cf.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";

    auto approximations = getApproximations(cf);
    std::cout << "Approximations:\n";
    for (const auto& frac : approximations)
        frac.print();

    return 0;
}
