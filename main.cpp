#include "progressbar.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 0;
    unsigned long finalValue = 1e9;

    ProgressBar progressBar(finalValue, "Computing sum(sqrt(x))");
    for(unsigned long i=0; i<finalValue; i++) {
        sum += sqrt(i);
        progressBar.update(i);
    }
    cout << "We're done! Sum is equal to " << sum << endl;
    return 0;
}

