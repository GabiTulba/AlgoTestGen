#include "testargs.h"

TestArgs::TestArgs(int &argc, char **&argv) {
    // TODO
    if (argc != GEN_ARGS) {
        printf("Usage %s filename", argv[0]);
        exit(0);
    }

    // CLI parsing
    // TODO
    filename = argv[1];

    // Asserts
    // TODO
}
