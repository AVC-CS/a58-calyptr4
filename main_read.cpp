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

    // TODO: open "students.txt" for reading

    // TODO: check if file opened successfully; print error and exit if not

    // TODO: read M from ifs, print "Total M students"

    for (int i = 0; i < M; i++)
    {
        // TODO: read stuName, score1, score2 from ifs
        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        // TODO: print Student Name, score1, score2, Sum, Avg
    }
    ifs.close();
    return 0;
}
