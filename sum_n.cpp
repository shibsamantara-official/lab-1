#include <iostream>

class NumberSeries {
private:
    int n;

public:
    // Function to get n from user
    void inputLimit() {
        std::cout << "Enter a positive integer (n): ";
        std::cin >> n;
    }

    // Function to calculate sum from 1 to n using a loop
    long long calculateSum() const {
        long long sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }

    // Function to display the result
    void displayResult() const {
        if (n < 1) {
            std::cout << "Please enter an integer greater than or equal to 1." << std::endl;
            return;
        }
        std::cout << "Sum of numbers from 1 to " << n << " is: " << calculateSum() << std::endl;
    }
};

int main() {
    NumberSeries series;

    series.inputLimit();
    series.displayResult();

    return 0;
}
