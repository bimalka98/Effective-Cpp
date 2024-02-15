#include <iostream>

# define PI 3.14159

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = PI * radius * radius;
    std::cout << "The area of the circle is " << area << std::endl;
    return 0;
}
