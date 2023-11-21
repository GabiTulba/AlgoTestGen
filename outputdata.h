#ifndef OUTPUTDATA_H
#define OUTPUTDATA_H

#include "inputdata.h"
#include <bits/stdc++.h>

class OutputData {
  public:
    // Output
    // TODO

    OutputData();

    bool operator==(OutputData const &o) const;
    bool is_valid(InputData &input);
    void print(FILE *file);
};

#endif // OUTPUTDATA_H
