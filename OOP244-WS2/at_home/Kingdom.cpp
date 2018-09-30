/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File: Kingdom.cpp
// Version: 1.0
// Date: Feb 2, 2018
// Description
// Implementation File
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: include the necessary headers
#include <iostream>
#include "Kingdom.h"


using namespace std;

// TODO: the sict namespace
namespace sict {

// TODO:definition for display(...)
    void display(Kingdom &kingdom) {

        cout << "" << kingdom.m_name;
        cout << ", population " << kingdom.m_population << endl;

    }

    void display(Kingdom pKingdom[], int count) {

        int total = 0;


        cout << "------------------------------" << endl;
        cout << "Kingdoms of SICT" << endl;
        cout << "------------------------------" << endl;
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << pKingdom[i].m_name << ", population " << pKingdom[i].m_population << endl;
            total += pKingdom[i].m_population;

        }

        cout << "------------------------------" << endl;
        cout << "Total population of SICT: " << total << endl;
        cout << "------------------------------" << endl;


    }


}


