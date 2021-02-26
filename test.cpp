#include <filesystem>
#include "ssAnalyzer/ssAnalyzer.h"

namespace fs = std::filesystem;

int main(int argc, char * argv[]) {
    ssAnalyzer ssA((argc >= 2 ? argv[1] : fs::current_path()));
    ssA.ListDefinitions();
    return 0;
}
