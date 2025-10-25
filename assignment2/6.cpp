#include <iostream>
#include <string>

class Sports; 

// Class 1: Student
class Student {
private:
    std::string studentName;
    int academicMarks; 

public:
    Student(const std::string& name, int marks) : studentName(name), academicMarks(marks) {}

    // Declaration of the non-member function 'compareScores' as a friend. This grants it access to this class's private members (academicMarks).
    friend void compareScores(const Student& s, const Sports& p);
};

// Class 2: Sports
class Sports {
private:
    std::string sportName;
    int matchScore; 

public:
    Sports(const std::string& name, int score) : sportName(name), matchScore(score) {}

  
    friend void compareScores(const Student& s, const Sports& p);
};


void compareScores(const Student& s, const Sports& p) {
    std::cout << "\nScore Comparison" << std::endl;
    std::cout << s.studentName << " (Academic Marks): " << s.academicMarks << std::endl;
    std::cout << p.sportName << " (Match Score): " << p.matchScore << std::endl;

    if (s.academicMarks > p.matchScore) {
        std::cout << "Result: Academic marks are higher than the match score." << std::endl;
    } else if (p.matchScore > s.academicMarks) {
        std::cout << "Result: Match score is higher than the academic marks." << std::endl;
    } else {
        std::cout << "Result: Academic marks and match score are equal." << std::endl;
    }
    
}


int main() {
    
    Student student1("Liam", 92);
    Sports match1("Cricket", 85);

    // Call the friend function, passing both objects
    compareScores(student1, match1);
    
    Student student2("Olivia", 75);
    Sports match2("Soccer", 99);
    
    compareScores(student2, match2);

    return 0;
}