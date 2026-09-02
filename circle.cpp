#include <iostream>

class Circle {
private:
    double radius;
    const double PI = 3.141592653589793;

public:
    // Function to take input from user
    void inputRadius() {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
    }

    // Function to calculate area (π * r * r)
    double getArea() const {
        return PI * radius * radius;
    }

    // Function to calculate circumference (2 * π * r)
    double getCircumference() const {
        return 2 * PI * radius;
    }

    // Function to print results
    void display() const {
        std::cout << "\n--- Circle Results ---" << std::endl;
        std::cout << "Radius:        " << radius << std::endl;
        std::cout << "Area:          " << getArea() << std::endl;
        std::cout << "Circumference: " << getCircumference() << std::endl;
    }
};

int main() {
    // Create an object of class Circle
    Circle myCircle;

    // Call member functions using the object
    myCircle.inputRadius();
    myCircle.display();

    return 0;
}
