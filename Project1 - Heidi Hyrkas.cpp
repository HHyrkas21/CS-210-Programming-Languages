#include <iostream>
#include <ctime>

using namespace std;
class Clock {
private:
    int hours;
    int minutes;
    int seconds;
    bool is24HourFormat;

public:
    // Constructor to initialize the clock
    Clock(bool is24HourFormat = false) : is24HourFormat(is24HourFormat) {
        // Initializes clock with current time
        time_t currentTime = time(0);
        struct tm* now = localtime(&currentTime);

        // Sets clock values to current time
        hours = now->tm_hour;
        minutes = now->tm_min;
        seconds = now->tm_sec;
    }

    // Display the clock
    void display() const {
        if (is24HourFormat) {
            // Display both clocks in 24-hour format
            cout << "**************************   ***************************\n";
            cout << "*       12-Hour Clock    *   *      24-Hour Clock      *\n";
            cout << "*        " << formatTime(true) << " A M    *   *       " << formatTime(false) << "          *\n";
            cout << "**************************   ***************************\n";
        } else {
            // Display both clocks in 12-hour format
            cout << "**************************   ***************************\n";
            cout << "*       12-Hour Clock    *   *      24-Hour Clock      *\n";
            cout << "*        " << formatTime(true) << " P M    *   *       " << formatTime(false) << "          *\n";
            cout << "**************************   ***************************\n";
        }
    }

    // Adds one hour to the clock
    void addHour() {
        hours = (hours + 1) % (is24HourFormat ? 24 : 12);
    }

    // Adds one minute to the clock
    void addMinute() {
        minutes = (minutes + 1) % 60;
    }

    // Adds one second to the clock
    void addSecond() {
        seconds = (seconds + 1) % 60;
    }

private:
    // Formats the time for display
    string formatTime(bool use12HourClock) const {
        char buffer[9];
        int hour = use12HourClock ? (hours % 12 == 0 ? 12 : hours % 12) : hours;
        snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d", hour, minutes, seconds);
        return buffer;
    }
};

int main() {
    Clock clock12(false); // Creates 12-hour clock
    Clock clock24(true);  // Creates 24-hour clock

    int choice;
    do {
        clock12.display();
        cout << "\nSelect an option:\n";
        cout << "1 - Add One Hour\n";
        cout << "2 - Add One Minute\n";
        cout << "3 - Add One Second\n";
        cout << "4 - Exit Program\n";
        cout << "\nEnter your choice:\n";
        cin >> choice;

        switch (choice) {
            case 1:
                clock12.addHour();
                clock24.addHour();
                break;
            case 2:
                clock12.addMinute();
                clock24.addMinute();
                break;
            case 3:
                clock12.addSecond();
                clock24.addSecond();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }

    } while (choice != 4);

    return 0;
}