// lab13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void pressEnterToContinue(void);


int main()
{
    // Lab 13: Problem 1
    cout << "Input file: ";
    string filename = " ";
    cin >> filename;
    ifstream in_file;
    in_file.open(filename.c_str());

    char c;
    double totalcharacters = 0;
    double acharacters = 0;
    double bcharacters = 0;
    double ccharacters = 0;
    double dcharacters = 0;
    double echaracters = 0;
    double fcharacters = 0;
    double gcharacters = 0;
    double hcharacters = 0;
    double icharacters = 0;
    double jcharacters = 0;
    double kcharacters = 0;
    double lcharacters = 0;
    double mcharacters = 0;
    double ncharacters = 0;
    double ocharacters = 0;
    double pcharacters = 0;
    double qcharacters = 0;
    double rcharacters = 0;
    double scharacters = 0;
    double tcharacters = 0;
    double ucharacters = 0;
    double vcharacters = 0;
    double wcharacters = 0;
    double xcharacters = 0;
    double ycharacters = 0;
    double zcharacters = 0;
    
    while (in_file.get(c)) {
        if (c == 'a' || c == 'A') {
            acharacters++;
            totalcharacters++;
        }
        if (c == 'b' || c == 'B') {
            bcharacters++;
            totalcharacters++;
        }
        if (c == 'c' || c == 'C') {
            ccharacters++;
            totalcharacters++;
        }
        if (c == 'd' || c == 'D') {
            dcharacters++;
            totalcharacters++;
        }
        if (c == 'e' || c == 'E') {
            echaracters++;
            totalcharacters++;
        }
        if (c == 'f' || c == 'F') {
            fcharacters++;
            totalcharacters++;
        }
        if (c == 'g' || c == 'G') {
            gcharacters++;
            totalcharacters++;
        }
        if (c == 'h' || c == 'H') {
            hcharacters++;
            totalcharacters++;
        }
        if (c == 'i' || c == 'I') {
            icharacters++;
            totalcharacters++;
        }
        if (c == 'j' || c == 'J') {
            jcharacters++;
            totalcharacters++;
        }
        if (c == 'k' || c == 'K') {
            kcharacters++;
            totalcharacters++;
        }
        if (c == 'l' || c == 'L') {
            lcharacters++;
            totalcharacters++;
        }
        if (c == 'm' || c == 'M') {
            mcharacters++;
            totalcharacters++;
        }
        if (c == 'n' || c == 'N') {
            ncharacters++;
            totalcharacters++;
        }
        if (c == 'o' || c == 'O') {
            ocharacters++;
            totalcharacters++;
        }
        if (c == 'p' || c == 'P') {
            pcharacters++;
            totalcharacters++;
        }
        if (c == 'q' || c == 'Q') {
            qcharacters++;
            totalcharacters++;
        }
        if (c == 'r' || c == 'R') {
            rcharacters++;
            totalcharacters++;
        }
        if (c == 's' || c == 'S') {
            scharacters++;
            totalcharacters++;
        }
        if (c == 't' || c == 'T') {
            tcharacters++;
            totalcharacters++;
        }
        if (c == 'u' || c == 'U') {
            ucharacters++;
            totalcharacters++;
        }
        if (c == 'v' || c == 'V') {
            vcharacters++;
            totalcharacters++;
        }
        if (c == 'w' || c == 'W') {
            wcharacters++;
            totalcharacters++;
        }
        if (c == 'x' || c == 'X') {
            xcharacters++;
            totalcharacters++;
        }
        if (c == 'y' || c == 'Y') {
            ycharacters++;
            totalcharacters++;
        }
        if (c == 'z' || c == 'Z') {
            zcharacters++;
            totalcharacters++;
        }
    }
    in_file.close();
    cout << "Total number of letters: " << totalcharacters << endl;
    cout << "Frequency: " << endl;
    cout << "'A': " << fixed << setprecision(3) << (acharacters / totalcharacters * 100) << endl;
    cout << "'B': " << fixed << setprecision(3) << (bcharacters / totalcharacters * 100) << endl;
    cout << "'C': " << fixed << setprecision(3) << (ccharacters / totalcharacters * 100) << endl;
    cout << "'D': " << fixed << setprecision(3) << (dcharacters / totalcharacters * 100) << endl;
    cout << "'E': " << fixed << setprecision(3) << (echaracters / totalcharacters * 100) << endl;
    cout << "'F': " << fixed << setprecision(3) << (fcharacters / totalcharacters * 100) << endl;
    cout << "'G': " << fixed << setprecision(3) << (gcharacters / totalcharacters * 100) << endl;
    cout << "'H': " << fixed << setprecision(3) << (hcharacters / totalcharacters * 100) << endl;
    cout << "'I': " << fixed << setprecision(3) << (icharacters / totalcharacters * 100) << endl;
    cout << "'J': " << fixed << setprecision(3) << (jcharacters / totalcharacters * 100) << endl;
    cout << "'K': " << fixed << setprecision(3) << (kcharacters / totalcharacters * 100) << endl;
    cout << "'L': " << fixed << setprecision(3) << (lcharacters / totalcharacters * 100) << endl;
    cout << "'M': " << fixed << setprecision(3) << (mcharacters / totalcharacters * 100) << endl;
    cout << "'N': " << fixed << setprecision(3) << (ncharacters / totalcharacters * 100) << endl;
    cout << "'O': " << fixed << setprecision(3) << (ocharacters / totalcharacters * 100) << endl;
    cout << "'P': " << fixed << setprecision(3) << (pcharacters / totalcharacters * 100) << endl;
    cout << "'Q': " << fixed << setprecision(3) << (qcharacters / totalcharacters * 100) << endl;
    cout << "'R': " << fixed << setprecision(3) << (rcharacters / totalcharacters * 100) << endl;
    cout << "'S': " << fixed << setprecision(3) << (scharacters / totalcharacters * 100) << endl;
    cout << "'T': " << fixed << setprecision(3) << (tcharacters / totalcharacters * 100) << endl;
    cout << "'U': " << fixed << setprecision(3) << (ucharacters / totalcharacters * 100) << endl;
    cout << "'V': " << fixed << setprecision(3) << (vcharacters / totalcharacters * 100) << endl;
    cout << "'W': " << fixed << setprecision(3) << (wcharacters / totalcharacters * 100) << endl;
    cout << "'X': " << fixed << setprecision(3) << (xcharacters / totalcharacters * 100) << endl;
    cout << "'Y': " << fixed << setprecision(3) << (ycharacters / totalcharacters * 100) << endl;
    cout << "'Z': " << fixed << setprecision(3) << (zcharacters / totalcharacters * 100) << endl;

    pressEnterToContinue();
}

// pressEnterToContinue: used to keep the console window open long enough to see your program's output
void pressEnterToContinue(void) {
    char c;
    cout << "Press Enter to continue...";
    cin.ignore(1024, '\n');
    do { cin.get(c); } while (c != '\n' && c != EOF);
    return;
}
