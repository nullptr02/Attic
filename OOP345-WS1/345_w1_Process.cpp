/*************************************************************************
// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// File: 345_w1_Process.cpp
// Version 2.0
// Date: May 16, 2018
// Author: Chris Szalwinski
// Description
// Header File
//
//
//////////////////////////////////////////////////////////////////////////
*************************************************************************/

//Link IO Library
#include <iostream>

//Link header files
#include "CString.h"
#include "345_w1_Process.h"

void process(const char *str) {
    sict::CString a(str);
    std::cout << a << std::endl;
}