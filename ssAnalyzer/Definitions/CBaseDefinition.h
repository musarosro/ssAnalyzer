//
// Created by Jakub Rocek on 26.02.2021.
//

#ifndef SSANALYZER_CBASEDEFINITION_H
#define SSANALYZER_CBASEDEFINITION_H


#include <string>

class CBaseDefinition {
public:
    CBaseDefinition();

    virtual ~CBaseDefinition();

private:
    std::string name;
};


#endif //SSANALYZER_CBASEDEFINITION_H
