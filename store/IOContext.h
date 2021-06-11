//
// Created by Ervin Bosenbacher on 10/06/2021.
//

#ifndef UNTITLED_IOCONTEXT_H
#define UNTITLED_IOCONTEXT_H

#include <string>
#include <vector>
#include <stdexcept>
#include <any>
#include <utility>
#include <cassert>

namespace finddit::yaco::store {

    class IOContext {
    public:
        enum class Context {
            MERGE,
            READ,
            FLUSH,
            DEFAULT
        };

        class ContextHelper {
        private:
            static std::vector<std::pair<Context, std::string> > pairs() {
                return {
                        { Context::MERGE, "MERGE" },
                        { Context::READ, "READ" },
                        { Context::FLUSH, "FLUSH" },
                        { Context::DEFAULT, "DEFAULT" }
                };
            }

        public:
            static std::vector<Context> values() {
                std::vector<Context> temp;
                for (auto& pair : pairs()) {
                    temp.push_back(pair.first);
                }
                return temp;
            }

            static std::string enumName(Context value) {
                for (auto& pair : pairs()) {
                    if (pair.first == value) {
                        return pair.second;
                    }
                }
                throw std::runtime_error("Enum not found.");
            }
        };
    };

}

#endif //UNTITLED_IOCONTEXT_H
