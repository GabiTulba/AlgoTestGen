#ifndef TESTGENERATOR_H
#define TESTGENERATOR_H

#include "inputdata.h"
#include "outputdata.h"
#include "solutions.h"
#include "testargs.h"
#include <bits/stdc++.h>

class TestGenerator {
  private:
    // Args
    TestArgs args;

    // I/O files
    FILE *file_in;
    FILE *file_ok;

    // Randomness
    std::mt19937 gen;

    // Input/Output data
    InputData input;
    OutputData output_brute;
    OutputData output_opt;

    void generate_test();

  public:
    TestGenerator(TestArgs args);
    ~TestGenerator();

    void print_input();

    void print_output();
};

#endif // TESTGENERATOR_H
