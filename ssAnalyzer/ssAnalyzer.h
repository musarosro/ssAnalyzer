//
// Created by Jakub Rocek on 26.02.2021.
//

#ifndef SSANALYZER_SSANALYZER_H
#define SSANALYZER_SSANALYZER_H

#include <filesystem>
#include <vector>
#include "Definitions/CBaseDefinition.h"

namespace fs = std::filesystem;

class ssAnalyzer {
public:
    explicit ssAnalyzer(fs::path baseDir = fs::current_path());

    virtual ~ssAnalyzer();

    void ListDefinitions();
private:
    fs::path baseDir;
    std::vector<CBaseDefinition> definitions;
    bool isPopulated;

    void ScanAllScpFiles();
    void ParseSingleFile(fs::path filename);

};


#endif //SSANALYZER_SSANALYZER_H
