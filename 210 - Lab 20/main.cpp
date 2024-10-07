// 210 - Lab 20 - Leah Balakrishnan

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;
const int MIN = 10000, MAX = 99999;

class Chair {
private:
    int legs;
    double *prices;
public:
    Chair() {
        srand(time());
        prices = new double[SIZE];
        
        legs = (rand() % 2) + 3;
        
        for (int i = 0, i < SIZE , i++) {
            prices[i] = (rand() % (MAX - MIN + 1) + MIN) / 100.0;
        }
    }
    
    Chair(int l, double p[SIZE]) {
        prices = new double[SIZE];
        legs = l;
        for (int i = 0; i < SIZE; i++) {
            prices[i] = p[i];
        }
    }
    
    void setLegs(int l) { legs = l; }
    int getLegs() { return legs; }
    
    void setPrices( double p1, double p2, double p3) {
        prices[0] = p1; prices[1] = p2; prices[2] = p3;
    }
    
};
