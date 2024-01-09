#include <cmath>
#include <iostream>
module student_1bib20095.Lab2.Variant21.Task4:Function1;

void RBPO::Lab2::Variant21::Task4::Function1() {
    double x, y;
    std::cout << "Enter x >> ";
    std::cin >> x;
    std::cout << "Enter y >> ";
    std::cin >> y;
    double result = (sqrt(x) - sqrt(y)) / x;
    std::cout << "Result equals " << result << std::endl;
}