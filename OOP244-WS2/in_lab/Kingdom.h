/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File: Kingdom.h
// Version: 1.0
// Date: Jan 29, 2018
// Description
// Header File
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef IN_LAB_KINGDOM_H
#define IN_LAB_KINGDOM_H


// TODO: sict namespace

namespace sict {

    // TODO: define the structure Kingdom in the sict namespace
    struct Kingdom {
        char m_name[32];
        int m_population;

    };

    // TODO: declare the function display(...),
    //also in the sict namespace
    void display(Kingdom& kingdom);


}


#endif //IN_LAB_KINGDOM_H
