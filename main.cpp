/* Test gen TODO
 * Generation method: random
 * CLI arguments: TODO filename
 */
#include "testgenerator.h"

#define DEBUG
#define ENABLE_BRUTE
#define SEED NULL

using namespace std;

int main(int argc, char **argv) {

    TestGenerator gc(TestArgs(argc, argv));

    gc.print_input();
    gc.print_output();

    return 0;
}
