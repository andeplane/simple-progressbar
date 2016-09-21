/*
 * progressbar.h progressbar.cpp
 * Created by Filip Sund and Anders Hafreager 2014.
 * */

#pragma once
#include <string>
using std::string;

class ProgressBar
{
private:
    unsigned long m_oldProgress;
    unsigned long m_finalValue;
    unsigned long m_currentValue;
    string m_description;
public:
    ProgressBar(unsigned long finalValue, string description);
    void update(unsigned long newValue);
};
