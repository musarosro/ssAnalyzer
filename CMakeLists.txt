cmake_minimum_required(VERSION 3.16)
project(ssAnalyzer)

set(CMAKE_CXX_STANDARD 17)

add_executable(ssAnalyzer test.cpp ssAnalyzer/ssAnalyzer.cpp ssAnalyzer/ssAnalyzer.h ssAnalyzer/Definitions/CBaseDefinition.cpp ssAnalyzer/Definitions/CBaseDefinition.h)