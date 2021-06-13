//
// Created by Ervin Bosenbacher on 13/06/2021.
//

#include "Equators.h"


namespace finddit::engine::util {

    bool NamedObject::instanceOf(const std::string &otherObjectName) const {
        const std::string thisObjectName = this->getObjectName();
        return thisObjectName == otherObjectName;
    }

    NamedObject::~NamedObject(){
    }
}