#include <cmath>
#include <iostream>
export module student_1bib20095.Lab2.Variant21.Task5;
namespace RBPO::Lab2::Variant21::Task5 {
    export void Function1();
    export void Function2();
    double FunctionA(int i);
    export void Function3();
    export void Function4();
}

module :private;
void RBPO::Lab2::Variant21::Task5::Function1() {
    double x, y;
    std::cout << "Enter x >> ";
    std::cin >> x;
    std::cout << "Enter y >> ";
    std::cin >> y;
    double result = (sqrt(x) - sqrt(y)) / x;
    std::cout << "Result equals " << result << std::endl;
}

void RBPO::Lab2::Variant21::Task5::Function2() {
    double x;
    std::cout << "Enter x >> ";
    std::cin >> x;
    double result = 0;
    if (x > 3)
        result =sin(x) / (x * x - 9);
    else
        result = x * x + 3 * x + 9;
    std::cout << "Result equals " << result << std::endl;
}

double RBPO::Lab2::Variant21::Task5::FunctionA(int i) {
    double result = pow(-1, i) /( (i + 1) * (i + 2) * (i + 3) );
    return result;
}

void RBPO::Lab2::Variant21::Task5::Function3() {
    std::cout << "Enter the number of iterations(n) >> ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    while (i <= n) {
        sum += FunctionA(i);
        i++;
    }
    std::cout << "Result of f3(" << n << ") equals " << sum << std::endl;
}

void RBPO::Lab2::Variant21::Task5::Function4() {
    std::cout << "Enter the accuracy of the ending iteration >> ";
    double E;
    std::cin >> E;
    double sum = 0.0;
    double prevSum = 0.0;
    double nextSum = 0.0;
    int k = 0;
    int i = 0;
    while (true)
    {
        prevSum = nextSum;
        nextSum = FunctionA(i);
        sum += FunctionA(i);
        k = i;
        if (abs(nextSum - prevSum) <= E)
        {
            break;
        }
        i++;
    }
    std::cout << "Result of f4() equals " << sum << std::endl << "Number of the last member k = " << k << std::endl;
}