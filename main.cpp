#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char **argv) {
  if (argc < 2) {
    std::wcout << "No file path provided.\n";
    return 1;
  }
  std::wifstream wifs(argv[1]);
  std::wstringstream wss;
  wss << wifs.rdbuf();
  auto wstring = wss.str();
  std::wcout << wstring << "\n";
  return 0;
}