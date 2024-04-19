#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip> // Add this include directive for std::setfill and std::setw

void reverseTimer(int seconds) {
    while (seconds >= 0) {
        int minutes = seconds / 60;
        int remainingSeconds = seconds % 60;
        std::cout << "\r" << std::setfill('0') << std::setw(2) << minutes << ":"
                  << std::setfill('0') << std::setw(2) << remainingSeconds;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        seconds--;
    }

    std::cout << "\rTime's up!        " << std::endl;
}

int main() {
    int secondsInput;

    std::cout << "Enter the number of seconds for the timer: ";
    std::cin >> secondsInput;

    if (secondsInput < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1;
    }

    std::cout << "Starting reverse timer..." << std::endl;
    reverseTimer(secondsInput);

    return 0;
}
