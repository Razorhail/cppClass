//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int QUESTIONS = 20;
const int STUDENTS = 200;
const double MAX_POINTS = 40.0;

int studentCount = 0;

void readFile(ifstream &infile, char answerKey[], string studentID[], string studentAnswers[]){
    char ch;
    int index = 0;

    for (int i = 0; i < 20; i++)
        infile >> answerKey[i];

    infile >> studentID[index];

    while (infile){
        studentCount++;
        infile.get(ch);
        getline(infile, studentAnswers[index]);

        index++;
        infile >> studentID[index];
    }
}

/*I had to re-read the instructions for the scoring a couple of times because it didn't make sense to me initially.
Anyway the scoreCheck function is written the way the book describes it. Important to note that this way if you get
1 wrong you automatically drop to 37/40 points but that seems the way they want it.*/
void scoreCheck(char answerKey[], string studenAnswers[], double studentScore[]){
    string answers;
    double sum;


    for (int i=0; i < studentCount; i++){
        answers = studenAnswers[i];
        sum = 0;

        for (int j = 0; j < answers.length(); j++){
            if (answers[j] == ' ')
                sum += 0;
            else if (answers[j] == answerKey[j])
                sum += 2;
            else
                sum -= 1;
        }
        studentScore[i] = sum;
    }
}

void calcGrade(double studentScores[], char studentGrades[]){
    double percentage = 0;

    for (int i = 0; i < studentCount; i++){
        percentage = (studentScores[i] / MAX_POINTS) * 100;

        if ((percentage >= 90) && (percentage <= 100))
            studentGrades[i] = 'A';
        else if ((percentage >= 80) && (percentage <= 89.99))
            studentGrades[i] = 'B';
        else if ((percentage >= 70) && (percentage <= 79.99))
            studentGrades[i] = 'C';
        else if ((percentage >= 60) && (percentage <= 69.99))
            studentGrades[i] = 'D';
        else
            studentGrades[i] = 'F';
    }
}

int main(){
    ifstream infile;
    string fileName /*= "forEx6.txt"*/; // Un-comment for default val
    char answerKey[QUESTIONS];
    string studentID[STUDENTS];
    string studentAnswers[STUDENTS];
    double studentScores[STUDENTS];
    char studentGrades[STUDENTS];

    cout << "Enter filename: "; cin >> fileName; // comment cin for default val

    infile.open(fileName);

    readFile(infile, answerKey, studentID, studentAnswers);

    scoreCheck(answerKey, studentAnswers, studentScores);

    calcGrade(studentScores, studentGrades);

    cout << "Results:" << endl;
    cout << "StudentID\tStudent Answers\t\t\tScore\tGrade" << endl; // tabs are nice for formatting

    for (int student = 0; student < studentCount; student++){
        cout << studentID[student] << "\t" <<
        studentAnswers[student] << "\t" << studentScores[student] << "\t\t" <<  studentGrades[student] << endl;
    }
    infile.close();

    return 0;
}