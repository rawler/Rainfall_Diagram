#include <map>

// QUESTION: With this implementation, how many Tables can exist in a single run
// of a program?
class RainfallTable {
private:
    // Read up on C++ template classes
    //
    // Simply put, a C++ template is equivalent to generics in C++ or Java
    //
    // The type or function itself takes an argument (usually another type)
    // to say "this a list where each item is a specific type"
    //
    // NOTE: The underscore is a convention for "private", not any special syntax.
    // It is subjective with at least as many opinions as there are coders.
    std::map<int, int> _measurements;

public:
    void addMeasurement(int year, int millimeters);

    // QUESTION: What does "const" mean? Why used here? Why not on addMeasurement?
    // QUESTION: Why don't we need any arguments here?
    void printTable() const;
};
