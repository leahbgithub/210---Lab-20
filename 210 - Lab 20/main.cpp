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
        
        }
    }
    
    Chair(int l, double p[SIZE]) {
        prices = new dou
    }
    
};
