#include "progressbar.h"
#include <iomanip>
#include <cmath>
#include <iostream>
using std::cout;
using std::setfill;
using std::setw;
using std::endl;

ProgressBar::ProgressBar(unsigned long finalValue, string description)
{
    m_oldProgress = 0;
    m_currentValue = 0;
    m_finalValue = finalValue;
    m_description = description;
}

void ProgressBar::update(unsigned long newValue) {
    m_currentValue = newValue;
    unsigned long progress = floor(m_currentValue/double(m_finalValue) / 0.1);
    if (progress > m_oldProgress) {
        cout << m_description;
        cout << " [";
        cout << setfill('#') << setw(progress) << "";
        cout << setfill('-') << setw(10-progress) << "";
        cout << "]" << endl;
        m_oldProgress = progress;
    }
}
