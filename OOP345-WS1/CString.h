/*************************************************************************
// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// File: CString.h
// Version 2.0
// Date: May 23, 2018
// Description
// Header File
//
//////////////////////////////////////////////////////////////////////////
*************************************************************************/

//Conditional pre-processor macro that prevents repeated access
#pragma once


//Header Safe Guards
#ifndef WS01_CSTRING_H
#define WS01_CSTRING_H

//Load Libraries
#include <iostream>
#include <cstring>



//SICT namespace
namespace sict {

    //Define unmodifiable variable size to 14
    const int MAX_CHAR = 14;

    //CString class
    class CString {

        //Private Data Members and Functions

        //Unmodifiable
        char clStr[MAX_CHAR + 1];

        //Private function that initializes _clStr to nullptr
        void safeState();

    public:

        //Default Constructor
        CString();

        CString(const char* str);


        std::ostream &display(std::ostream &) const;

    };

    std::ostream &operator<<(std::ostream &, const CString &);

}


#endif //WS01_CSTRING_H

