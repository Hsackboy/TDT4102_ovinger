
#pragma once
#include "std_lib_facilities.h"

// BEGIN: 1b
// deklarerer funksjonen incrementByValueNumTimes her
int incrementByValueNumTimes(int startValue, int increment, int numTimes);
// END: 1b

// BEGIN: 1d
// deklarerer funksjonen incrementByValueNumTimesRef her
void incrementByValueNumTimesRef(int& startValue, int increment, int numtimes);
// END: 1d

// BEGIN: 1e
// deklarerer funksjonen swapNumbers her
void swapNumbers(int& num1, int& num2);
// END: 1e

// BEGIN: 2a
// lag struct Student her
struct Student
{
    string name;
    string studyProgram;
    int age;
};

// END: 2a

// BEGIN: 2b
// deklarerer funksjonen printStudent her
void printStudent(struct Student);
// END: 2b

// BEGIN: 2c
// deklarerer funksjonen isInProgram her
bool isInProgram(Student stud,string progamName);
// END: 2c

// BEGIN: 3a
// deklarerer funksjonen randomizeString her
string randomizeString(int letterCOunt,char uppperLimit,char lowerLimit);
// END: 3a

// BEGIN: 3c
// deklarerer funksjonen readInputToString her
string readInputToString(int n, char upperLimit, char lowerLimit);
// END: 3c

// BEGIN: 3d
// deklarerer funksjonen countChar her
int countChar(string text, char letter);
// END: 3d
