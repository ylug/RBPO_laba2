#include <cmath>
#include <iostream>
module student_1bib20095.Lab2.Variant21.Task3;
void RBPO::Lab2::Variant21::Task3::Function2() {
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