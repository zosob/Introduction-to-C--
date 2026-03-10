/*
    Spring Break Zombie Survival Helper
    -----------------------------------
    Course: Intro to C++ (User-Defined Functions Week)

    Concepts practiced:
      - Function declarations (prototypes)
      - Function definitions
      - Parameters and return values
      - Void functions (print-only)
      - Functions with math
      - Functions with branches (if / else if / else)
      - Functions with loops
      - Simple "unit test"-style checking

    Story:
      It's spring break at the beach, but a zombie outbreak has started!
      This program helps a survivor:
        1) See average zombies seen per day
        2) Get a danger rating
        3) Enter zombies for many days using a loop
        4) See a "survival chance" percentage
        5) Run simple tests on one function
*/

#include <iostream>
#include <string>   // needed for std::string
using namespace std;

// ===================================================
// 1. Function Declarations (Prototypes)
//    Tell the compiler these functions exist.
//    Their full definitions will come *after* main.
// ===================================================

// Prints an introduction to the story (no input, no return)
void PrintIntro();

// Computes average zombies for 3 days
double AverageZombies3(double day1, double day2, double day3);

// Returns a text description of danger level based on average
string DangerRating(double avgZombies);

// Uses a loop to ask for zombies over many days and returns the total
int TotalZombiesManyDays(int days);

// Returns an estimated survival chance (0–100%) based on total zombies
int SurvivalChance(int totalZombies);

// Simple manual tests for the DangerRating function
void TestDangerRating();

// ===================================================
// 2. main() - Program entry point
// ===================================================

int main() {
    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;

    // Call our story intro function (void, no return value)
    PrintIntro();

    // ------------------------------------------------
    // PART A: Average over exactly 3 days
    // ------------------------------------------------
    double day1, day2, day3;

    cout << "Let's start with the last 3 days of zombie sightings." << endl;

    cout << "Enter zombies seen on Day 1: ";
    cin >> day1;

    cout << "Enter zombies seen on Day 2: ";
    cin >> day2;

    cout << "Enter zombies seen on Day 3: ";
    cin >> day3;

    // Call our AverageZombies3 function
    double avg3 = AverageZombies3(day1, day2, day3);

    cout << "\nAverage zombies per day (over 3 days): " << avg3 << endl;

    // Use the DangerRating function to get a text description
    string rating3 = DangerRating(avg3);
    cout << "Danger rating (3-day average): " << rating3 << endl;


    // ------------------------------------------------
    // PART B: Total and average over many days (loop)
    // ------------------------------------------------
    int numDays;
    cout << "\nNow let's consider your *whole* spring break." << endl;
    cout << "How many days have you been surviving? ";
    cin >> numDays;

    // Call a function that uses a loop inside
    int totalZombies = TotalZombiesManyDays(numDays);

    cout << "\nTotal zombies encountered over " << numDays
         << " days: " << totalZombies << endl;

    // We can compute the average in main using the total and days.
    double avgMany = 0.0;
    if (numDays > 0) {
        // Cast to double so we don't do integer division
        avgMany = static_cast<double>(totalZombies) / numDays;
    }

    cout << "Average zombies per day over " << numDays
         << " days: " << avgMany << endl;

    // Get a danger rating again using the many-day average
    string ratingMany = DangerRating(avgMany);
    cout << "Danger rating (many-day average): " << ratingMany << endl;

    // Compute survival chance based on total
    int chance = SurvivalChance(totalZombies);
    cout << "\nEstimated survival chance: " << chance << "%" << endl;


    // ------------------------------------------------
    // PART C: Simple manual unit tests
    // ------------------------------------------------
    cout << "\n--- Running simple tests on DangerRating() ---" << endl;
    TestDangerRating();
    cout << "--- End of tests ---\n" << endl;

    cout << "Thanks for using the Spring Break Zombie Survival Helper!" << endl;
    cout << "Stay safe out there on the beach..." << endl;

    return 0;  // Program ended successfully
}

// ===================================================
// 3. Function Definitions
// ===================================================

/*
    PrintIntro
    ----------
    A "void" function:
      - It does not take any input parameters.
      - It does not return a value.
    It just prints the story introduction.
*/
void PrintIntro() {
    cout << "\nYou were hoping for a relaxing spring break at the beach..." << endl;
    cout << "But suddenly, zombie outbreak sirens start blaring!" << endl;
    cout << "You decide to track zombie sightings and estimate your chance of survival." << endl;
    cout << "Let's begin.\n" << endl;
}

/*
    AverageZombies3
    ---------------
    Input:
      - day1, day2, day3: number of zombies seen each day (double)
    Output:
      - The average zombies per day as a double.
*/
double AverageZombies3(double day1, double day2, double day3) {
    double sum = day1 + day2 + day3;   // total zombies over 3 days
    double avg = sum / 3.0;           // divide by 3.0 (not 3) to get a double result
    return avg;                       // send the result back to main()
}

/*
    DangerRating
    ------------
    Input:
      - avgZombies: average zombies seen per day (double)
    Output:
      - A string describing the danger level.

    Scale:
      avg >= 20  -> "EXTREME - RUN!"
      avg >= 10  -> "HIGH - Stay alert."
      avg >= 5   -> "MODERATE - Stick with a group."
      else       -> "LOW - You're probably okay... probably."
*/
string DangerRating(double avgZombies) {
    if (avgZombies >= 20.0) {
        return "EXTREME - RUN! The beach is overrun!";
    }
    else if (avgZombies >= 10.0) {
        return "HIGH - Stay alert. Travel only in groups.";
    }
    else if (avgZombies >= 5.0) {
        return "MODERATE - Stick with a group and be careful.";
    }
    else {
        return "LOW - You're probably okay... probably.";
    }
}

/*
    TotalZombiesManyDays
    --------------------
    Input:
      - days: number of days (int)
    Output:
      - Total zombies seen over all days (int)

    This function shows:
      - A loop inside a function
      - Reading input multiple times
*/
int TotalZombiesManyDays(int days) {
    int sum = 0;           // start total at 0
    int zombiesToday = 0;  // will hold today's input

    if (days <= 0) {
        cout << "You entered 0 or fewer days. Assuming no zombies." << endl;
        return 0;
    }

    // For-loop: repeat exactly 'days' times
    for (int i = 1; i <= days; ++i) {
        cout << "Enter zombies seen on day " << i << ": ";
        cin >> zombiesToday;

        // Add today's zombies to running total
        sum += zombiesToday;   // same as sum = sum + zombiesToday;
    }

    return sum;
}

/*
    SurvivalChance
    --------------
    Input:
      - totalZombies: total zombies encountered (int)
    Output:
      - An integer from 0 to 100 representing "chance of survival" (just for fun).

    Example rules:
      total >= 100  -> 5% chance
      total >= 50   -> 25% chance
      total >= 20   -> 50% chance
      else          -> 90% chance
*/
int SurvivalChance(int totalZombies) {
    if (totalZombies >= 100) {
        return 5;
    }
    else if (totalZombies >= 50) {
        return 25;
    }
    else if (totalZombies >= 20) {
        return 50;
    }
    else {
        return 90;
    }
}

/*
    TestDangerRating
    ----------------
    A very simple "manual unit test" function.

    Idea:
      - Call DangerRating with some known inputs.
      - Check whether the returned string matches what we expect.
      - Print "PASS" or "FAIL".

    This helps students understand:
      - Functions can be tested separately.
      - The idea of expected vs actual results.
*/
void TestDangerRating() {
    // Test 1: avg = 25 -> expect EXTREME
    string result1 = DangerRating(25.0);
    if (result1 == "EXTREME - RUN! The beach is overrun!") {
        cout << "PASS: DangerRating(25.0)" << endl;
    } else {
        cout << "FAIL: DangerRating(25.0) -> " << result1 << endl;
    }

    // Test 2: avg = 12 -> expect HIGH
    string result2 = DangerRating(12.0);
    if (result2 == "HIGH - Stay alert. Travel only in groups.") {
        cout << "PASS: DangerRating(12.0)" << endl;
    } else {
        cout << "FAIL: DangerRating(12.0) -> " << result2 << endl;
    }

    // Test 3: avg = 6 -> expect MODERATE
    string result3 = DangerRating(6.0);
    if (result3 == "MODERATE - Stick with a group and be careful.") {
        cout << "PASS: DangerRating(6.0)" << endl;
    } else {
        cout << "FAIL: DangerRating(6.0) -> " << result3 << endl;
    }

    // Test 4: avg = 1 -> expect LOW
    string result4 = DangerRating(1.0);
    if (result4 == "LOW - You're probably okay... probably.") {
        cout << "PASS: DangerRating(1.0)" << endl;
    } else {
        cout << "FAIL: DangerRating(1.0) -> " << result4 << endl;
    }
}