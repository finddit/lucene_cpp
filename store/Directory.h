//
// Created by Ervin Bosenbacher on 10/06/2021.
//

#ifndef UNTITLED_DIRECTORY_H
#define UNTITLED_DIRECTORY_H


#include <vector>
#include "IndexOutput.h"
#include "IOContext.h"

namespace finddit::engine::store {

    /**
     * A {@code Directory} provides an abstraction layer for storing a list of files. A directory
     * contains only files (no sub-folder hierarchy).
     *
     *
     */
    class Directory {
    public:
        // Closeable
        ~Directory();

    public:
        virtual std::vector<std::string> listAll() = 0;

        /**
         * Removes an existing file in the directory.
         * @param name The name of an existing file.
         */
        virtual void deleteFile(const std::string& name) = 0;

        /**
         *
         * @param name
         * @return
         */
        virtual long long fileLength(const std::string& name) = 0;

        virtual IndexOutput *createOutput(const std::string& name, IOContext *context) = 0;
    };

}

#endif //UNTITLED_DIRECTORY_H
