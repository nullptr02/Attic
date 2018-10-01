/*************************************************************************
// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// File: CString.cpp
// Version 2.0
// Date: May 23, 2018
// Description
// Implementation File
//
//////////////////////////////////////////////////////////////////////////
*************************************************************************/



#include <iostream>
#include <cstring>

#include "CString.h"


int COUNTER{10};

namespace sict {

    //Default Constructor
    CString::CString() {

        safeState();

    }

    //One Argument Constructor
    CString::CString(const char *str) {
        if (str != nullptr) {

            strncpy(clStr, str, MAX_CHAR);
            clStr[MAX_CHAR] = '\0';

        } else {

            CString();

        }
    }

    //Function that init clStr to nullptr
    void CString::safeState() {

        clStr[0] = '\0';

    }



    std::ostream &CString::display(std::ostream &os) const {

        return os << clStr;

    }

    std::ostream &operator<<(std::ostream &os, const CString &cs) {

        os << " " << COUNTER++ << ": ";
        return cs.display(os);
    }


}