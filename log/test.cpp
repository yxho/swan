#include "Log.h"
#include <string>
using namespace ohxy;
int main() {


//  setLogFile("./logs/test_log_file.log");
//  setLogLevel(ohxy::LogLevel::DEBUG);
  setWriter(ohxy::make_unique<ohxy::RotateWriter>());
  setLogFile("./test_log_file.log");
  setLogLevel(ohxy::LogLevel::DEBUG);
  setMaxSize(256); // 64MB
  setMaxBackups(10);
  std::string str("std::string");
  LOG_DEBUG << 'c' << 65535 << 75808 << 3.14159 << "c@string" << str;
  OHXY_LOG_DEBUG<< 'c' << 65535 << 75808 << 3.14159 << "c@string" << str;
  return 0;
}




