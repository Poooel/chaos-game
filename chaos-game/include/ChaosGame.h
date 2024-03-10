#ifndef CHAOSGAME_H
#define CHAOSGAME_H

#include <map>
#include <Point.h>
#include <vector>
#include <random>

class ChaosGame {
public:
    ChaosGame();
    ~ChaosGame() = default;

    void nextIteration();

    std::vector<Point> getPoints();

private:
    int getRandomNumber();
    Point getMidPoint(const Point& a, const Point& b);

    std::vector<Point> _startingPoints = {};
    std::vector<Point> _points = {};
    std::map<int, Point> _diceToPoints = {};

    int _lowerBound = 1;
    int _upperBound = 6;

    std::random_device _randomDevice;
    std::mt19937 _randomNumberGenerator;
    std::uniform_int_distribution<std::mt19937::result_type> _uniformDistribution;
};

#endif //CHAOSGAME_H