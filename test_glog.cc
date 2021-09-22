#include <iostream>
#include <glog/logging.h>

int main (int argc, char** argv) {
    FLAGS_log_dir = "./logs";
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "test: INFO";
    LOG(WARNING) << "test: WARNING";
    LOG(ERROR) << "test: ERROR";
    // LOG(FATAL) << "test: FATAL";
    google::ShutdownGoogleLogging();
    return 0;
}