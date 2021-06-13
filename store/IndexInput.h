//
// Created by Ervin Bosenbacher on 13/06/2021.
//

#ifndef UNTITLED_INDEXINPUT_H
#define UNTITLED_INDEXINPUT_H

#include <cstdio>
#include <cinttypes>

#include "Equators.h"

namespace finddit::engine::store {

    template<typename EngineBase>
class IndexInput : public EngineBase, public finddit::engine::util::NamedObject {

    public:

        /**
         * Reads a specified number of bytes into an array at the specified offset
         * @param b
         * @param len
         */
        virtual void readBytes(uint8_t* b, const int32_t len) = 0;
    };
}


#endif //UNTITLED_INDEXINPUT_H
