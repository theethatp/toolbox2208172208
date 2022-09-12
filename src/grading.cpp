#include <iostream>
using namespace std;

int main() {
    int homework;
    int midterm_score;
    int final_score;

    cin >> homework;
    cin >> midterm_score;
    cin >> final_score;

    int sum = homework+midterm_score+final_score;
    if (sum >=80){
        cout << "A";
    }
    else if (75 <= sum <=79){
        cout << "B+";
    }
    else if (70 <= sum <=74){
        cout << "B";
    }
    else if (65 <= sum <=69){
        cout << "C+";
    }
    else if (60 <= sum <=64){
        cout << "C";
    }
    else if (55 <= sum <=59){
        cout << "D+";
    }
    else if (50 <= sum <=54){
        cout << "D";
    }
    else {
        cout << "F";
    }
    return 0;
}