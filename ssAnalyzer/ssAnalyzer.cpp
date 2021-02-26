//
// Created by Jakub Rocek on 26.02.2021.
//

#include <iostream>
#include <utility>
#include "ssAnalyzer.h"

/**
 * @brief Constructor of ssAnalyzer class
 * @param baseDir - encompassing directory for all the sphere scripts
 */
ssAnalyzer::ssAnalyzer(fs::path baseDir) {
    this->baseDir = std::move(baseDir);
    this->isPopulated = false;
}

ssAnalyzer::~ssAnalyzer() = default;

/**
 * @brief Method runs through directory given in constructor and scans
 * all .scp files for definitions. Then lists the definitions.
 */
void ssAnalyzer::ListDefinitions() {
    if(!this->isPopulated) {
        this->ScanAllScpFiles();
        this->isPopulated = true;
    }
    std::cout << "Listing definitions not implemented." << std::endl;
}

void ssAnalyzer::ScanAllScpFiles() {
    int parsedFiles = 0;
    for (const auto& entry : fs::recursive_directory_iterator(this->baseDir)) {
        const auto filenameStr = entry.path().filename().string();
        if (entry.is_regular_file() && entry.path().extension() == ".scp") {
            this->ParseSingleFile(entry.path());
            parsedFiles++;
        }
    }
    std::cout << "Totally parsed: " << parsedFiles << " files" << std::endl;
}

void ssAnalyzer::ParseSingleFile(fs::path filename) {
    std::cout << "Parsing file: " << filename << std::endl;
}
