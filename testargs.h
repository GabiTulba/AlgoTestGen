#ifndef TESTARGS_H
#define TESTARGS_H

#include <bits/stdc++.h>

class TestArgs {
  public:
    // Limits
    static const int GEN_ARGS = 2;

    // Args
    // TODO
    std::string filename;

    TestArgs(int &argc, char **&argv);
};

#endif // TESTARGS_H
