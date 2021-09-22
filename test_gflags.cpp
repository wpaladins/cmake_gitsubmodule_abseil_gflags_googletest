#include <iostream>
#include <gflags/gflags.h>

using namespace std;

DEFINE_bool(flag, false, "test_flag");

int main(int argc, char** argv) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    if (FLAGS_flag) {
        cout << "flag: true" << endl;
    } else {
        cout << "flag: false" << endl;
    }
}
