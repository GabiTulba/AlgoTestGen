#include "testgenerator.h"

#define DEBUG
#define ENABLE_BRUTE
// #define SEED 0

void TestGenerator::generate_test() {
    // TODO
}

TestGenerator::TestGenerator(TestArgs args) : args(args) {
    file_in = fopen((args.filename + ".in").c_str(), "w");
    file_ok = fopen((args.filename + ".ok").c_str(), "w");

#ifdef SEED
    long long seed = SEED;
#endif
#ifndef SEED
    long long seed = std::chrono::system_clock::now().time_since_epoch().count();
#endif
    gen = std::mt19937(seed);

#ifdef DEBUG
    printf("%lld\n", seed);
#endif

    generate_test();
}

TestGenerator::~TestGenerator() {
    fclose(file_in);
    fclose(file_ok);
}

void TestGenerator::print_input() { input.print(file_in); }

void TestGenerator::print_output() {
    Solutions::optimal(input, output_opt);

    output_opt.print(file_ok);

#ifdef ENABLE_BRUTE
    Solutions::brute(input, output_brute);
    assert(output_brute == output_opt);
#endif
}
