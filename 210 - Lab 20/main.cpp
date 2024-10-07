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
    // default constructor
    Chair() {
        srand(time(0)); // seed this
        prices = new double[SIZE];
        
        // assign 3 or 4 legs, random assign
        legs = (rand() % 2) + 3;
        
        // assign between 100.00 and 999.99 for prices
        for (int i = 0; i < SIZE; i++) {
            prices[i] = (rand() % (MAX - MIN + 1) + MIN) / 100.0;
        }
    }
    
    // parameter constructor
    Chair(int l, double p[SIZE]) {
        prices = new double[SIZE];
        legs = l;
        for (int i = 0; i < SIZE; i++) {
            prices[i] = p[i];
        }
    }
    
    // setters and getters
    void setLegs(int l) { legs = l; }
    int getLegs() { return legs; }
    
    void setPrices( double p1, double p2, double p3) {
        prices[0] = p1; prices[1] = p2; prices[2] = p3;
    }
    
    // method which will calculate average of the prices
    double getAveragePrices() {
        double sum = 0;
        for (int i = 0; i < SIZE; i++)
            sum += prices[i];
        return sum / SIZE;
    }
    
    // method that will print the data for chair
    void print() {
        cout << "CHAIR DATA (legs) --> " << legs << endl;
        cout << "Price history --> ";
        for (int i = 0; i < SIZE; i++)
            cout << prices[i] << " ";
        cout << endl << "Historical avg price: " << getAveragePrices() << endl << endl;
    }
    
    // destructor for memory that was dynamically allocated
    ~Chair() {
        delete[] prices;
    }
};

// create main
int main() {
    cout << fixed << setprecision(2);
    
    // create pointer using default constructor to first chair object
    Chair *chairPtr = new Chair;
    chairPtr->print();
    
    // dynamic chair object with parameter constructor
    double prices[SIZE] = {525.25, 434.34, 252.52};
    Chair *livingChair = new Chair(3, prices);
    livingChair->print();
    delete livingChair;
    livingChair = nullptr;
    
    // dynamic array for chair objects
    Chair *collection = new Chair[SIZE];
    for (int i = 0; i < SIZE; i++) {
        collection[i].print();
    }
    
    delete[] collection;
    return 0; //terminate program
}
