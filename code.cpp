#include <iostream>
#include <cmath>

int main() {
    const double g = 9.81; // acceleration due to gravity in m/s^2
    double time; // time of fall in seconds

    std::cout << "Enter the time of fall in seconds: ";
    std::cin >> time;

    double distance = 0.5 * g * std::pow(time, 2);
    double velocity = g * time;

    std::cout << "Distance fallen: " << distance << " meters" << std::endl;
    std::cout << "Final velocity: " << velocity << " m/s" << std::endl;

    return 0;
}