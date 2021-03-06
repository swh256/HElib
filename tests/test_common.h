#ifndef TEST_COMMON_H
#define TEST_COMMON_H
#include <helib/ArgMap.h>

namespace helib_test {
    extern char *path_of_executable;
    extern bool noPrint;
    extern bool verbose;
    extern bool dry;
    extern unsigned int random_seed;

    void parse_common_args(int argc, char *argv[]);

};

#endif /* ifndef TEST_COMMON_H */

