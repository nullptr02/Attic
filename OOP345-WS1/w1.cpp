/*************************************************************************
// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// File: w1.cpp
// Version 2.0
// Date: May 23, 2018
// Description
// Client File
//
//////////////////////////////////////////////////////////////////////////
*************************************************************************/

#include <iostream>
#include <fstream>

#include "345_w1_Process.h"
#include "CString.h"


//External Linkage
extern int COUNTER;

using namespace std;
using namespace sict;

int main(int argc, char *argv[]) {

    cout << "Command Line :";

    for (int k = 0; k < argc; k++) {
        cout << " " << argv[k];
    }

    cout << endl;


    if (argc == 1) {

        cout << endl << "*** Insufficient number of arguments ***" << endl;
        cout << "Usage: w1 filename" << endl;
        return 1;

    } else if (argc != 2) {

        cout << "*** Too many arguments ***" << endl;
        cout << "Usage: w1 filename" << endl;
        return 1;

    } else {

        ifstream file(argv[argc - 1]);

        if (file) {
            cout << "Reading records from file " << argv[argc - 1] << endl;
            cout << " No Record Contents ..." << endl;


            while (!file.eof()) {

                char temp[MAX_CHAR + 1];
                file.get(temp, MAX_CHAR + 1, '\n');
                file.ignore(2000, '\n');
                process(temp);
            }

            return 0;

        } else {
            cout << "*** Failed to open file " << argv[argc - 1] << " ***" << endl;
            return 1;


        }

    }


}