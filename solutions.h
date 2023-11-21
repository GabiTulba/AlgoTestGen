#ifndef SOLUTION_H
#define SOLUTION_H

#include "inputdata.h"
#include "outputdata.h"

class Solutions {
  public:
    Solutions() = delete;

    static void optimal(InputData &input, OutputData &output);
    static void brute(InputData &input, OutputData &output);
};

#endif // SOLUTION_H
