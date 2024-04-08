#include "Bowler.h"

// Constructors
Bowler::Bowler() : firstName(""), lastName(""), averageScore(0) {
    for (int i = 0; i < 3; ++i)
        scores[i] = 0;
}

Bowler::Bowler(std::string first, std::string last, int score1, int score2, int score3) : 
    firstName(first), lastName(last) {
    scores[0] = score1;
    scores[1] = score2;
    scores[2] = score3;
    calculateAverage();
}

// Accessors
std::string Bowler::getFirstName() const {
    return firstName;
}

std::string Bowler::getLastName() const {
    return lastName;
}

double Bowler::getAverageScore() const {
    return averageScore;
}

// Mutators
void Bowler::setScores(int score1, int score2, int score3) {
    scores[0] = score1;
    scores[1] = score2;
    scores[2] = score3;
    calculateAverage();
}

// Overloaded operators
bool Bowler::operator==(const Bowler& other) const {
    return averageScore == other.averageScore;
}

bool Bowler::operator<(const Bowler& other) const {
    return averageScore < other.averageScore;
}

bool Bowler::operator>(const Bowler& other) const {
    return averageScore > other.averageScore;
}

// Helper function to calculate average score
void Bowler::calculateAverage() {
    averageScore = (scores[0] + scores[1] + scores[2]) / 3.0;
}
