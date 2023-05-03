#include <iostream>
#include <string>
#include <vector>

class Instrument {
public:
    Instrument(int num, bool tune) {
        this->numberOfStrings = num;
        this->isTuned = tune;
        instrumentCount++;
    }
    void makeSound() {
        std::cout << "Ding! \n";
    }
    void checkValues() {
        std::cout << "This instrument has " << numberOfStrings << " strings. Is it in tune? ";
        if (isTuned == true) {
            std::cout << "Yes! \n";
        }
        else {
            std::cout << "Nope. \n";
        }
    }

    void setNumOfStr(int num) {
        numberOfStrings = num;
    }
    int getNumOfStr() {
        return numberOfStrings;
    }

    void setIsTuned(bool tuned) {
        isTuned = tuned;
    }
    bool getIsTuned() {
        return isTuned;
    };

    static int getInstrumentCount() {
        return instrumentCount;
    }

private:
    int numberOfStrings;
    bool isTuned;
    static int instrumentCount;
};

int Instrument::instrumentCount = 0;

int main() {
    Instrument inst1(5, true);
    Instrument inst2(4, false);

    std::vector<Instrument*> instruments{ &inst1, &inst2 };

    for (int i = 0; i < 2; i++) {
        instruments[i]->makeSound();
        instruments[i]->checkValues();
    }

    std::cout << "Total instruments created: " << Instrument::getInstrumentCount() << "\n";
}
