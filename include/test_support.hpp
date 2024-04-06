#ifndef TEST_SUPPORT_HEADER_FILE_HPP
#define TEST_SUPPORT_HEADER_FILE_HPP

#include <iostream>
#include <sstream>
#include <functional>

class AutoRestoreRdbuf {
    std::ostream &out;
    std::streambuf *old;

  public:
    ~AutoRestoreRdbuf() { out.rdbuf(old); }
    AutoRestoreRdbuf(const AutoRestoreRdbuf &) = delete;
    AutoRestoreRdbuf(AutoRestoreRdbuf &&) = delete;
    AutoRestoreRdbuf(std::ostream &out) : out{out}, old{out.rdbuf()} {}
};

std::string stringWrittentToStream(std::function<void()> myFunction,
                                   std::ostream &myOut);

#endif // TEST_SUPPORT_HEADER_FILE_HPP
