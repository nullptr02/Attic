/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File: Kingdom.cpp
// Version: 1.0
// Date: Jan 29, 2018
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

}


