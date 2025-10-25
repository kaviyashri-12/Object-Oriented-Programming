#include <iostream>
#include <string>

class LivingBeing {
protected:
    int entityID;

public:
    LivingBeing(int id) : entityID(id) {}

    void showLivingInfo() const {
        std::cout << "  Entity ID: " << entityID << std::endl;
    }
};

class Person : virtual public LivingBeing {
protected:
    std::string fullName;
    int personAge;

    Person(const std::string& n, int a, int id)
        : LivingBeing(id), fullName(n), personAge(a) {}

    void showPersonData() const {
        std::cout << "  Name: " << fullName << ", Age: " << personAge << std::endl;
    }
};

class Athlete : virtual public LivingBeing {
protected:
    std::string athleteSport;
    int matchWins;

public:
    Athlete(const std::string& s, int wins, int id)
        : LivingBeing(id), athleteSport(s), matchWins(wins) {}

    void showAthleteData() const {
        std::cout << "  Sport: " << athleteSport << ", Wins: " << matchWins << std::endl;
    }
};

class SportsPerson : public Person, public Athlete {
private:
    std::string proLeague;

public:
    SportsPerson(const std::string& n, int a, int shared_id, const std::string& s, int wins, const std::string& l)
        : LivingBeing(shared_id),
          Person(n, a, shared_id), 
          Athlete(s, wins, shared_id), 
          proLeague(l) {}

    void showCompleteInfo() const {
        std::cout << "\nComplete SportsPerson Info " << std::endl;
        
        showPersonData();
        showAthleteData();
        
        std::cout << "Inherited Info" << std::endl;
        showLivingInfo(); 
        
        std::cout << "  League: " << proLeague << std::endl;
    }
};

int main() {
    std::cout << "Multiple Inheritance (Virtual Base) \n" << std::endl;

    SportsPerson pro_athlete(
        "Max Verstappen", 
        27, 
        100, 
        "F1 Racing", 
        59, 
        "FIA F1" 
    );

    pro_athlete.showCompleteInfo();

    return 0;
}
