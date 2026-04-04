#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int M;
    double score1, score2, sum, avg;
    string stuName;
    ifstream ifs;

    ifs.open("Student.txt");
    if (!ifs.is_open()){
        cerr << "Error opening file!" << endl;
        return 1;
    }
    ifs >> M;
    cout << "Total: " << M << " students" << endl;
    
    for (int i = 0; i < M; i++){
        ifs >> stuName >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;
        cout << "Student Name: " << stuName << "\tscore 1: " << score1 << "\tscore 2: " << score2 << "\tSum: " << sum << "\tAvg: " << avg << endl;
    }
    ifs.close();
    return 0;
}
