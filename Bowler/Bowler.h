#ifndef BOWLER_H
#define BOWLER_H

#include <string>

class Bowler {
private:
    std::string firstName;
    std::string lastName;
    int scores[3];
    double averageScore;

public:
    // Constructors
    Bowler();
    Bowler(std::string first, std::string last, int score1, int score2, int score3);

    // Accessors
    std::string getFirstName() const;
    std::string getLastName() const;
    double getAverageScore() const;

    // Mutators
    void setScores(int score1, int score2, int score3);

    // Overloaded operators
    bool operator==(const Bowler& other) const;
    bool operator<(const Bowler& other) const;
    bool operator>(const Bowler& other) const;

private:
    // Helper function to calculate average score
    void calculateAverage();
};

#endif // BOWLER_H
