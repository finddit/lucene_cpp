//
// Created by Ervin Bosenbacher on 13/06/2021.
//

#ifndef UNTITLED_EQUATORS_H
#define UNTITLED_EQUATORS_H

#include <string>

namespace finddit::engine::util {

    class Equals {
        class Int32: public std::binary_function<const int32_t, const int32_t, bool> {
        public:
            bool operator()(const int32_t val1, const int32_t val2) const;
        };

        class Char:  public std::binary_function<const char *, const char *, bool> {
        public:
            bool operator()(const char* val1, const char* val2) const;
        };

        class WChar:  public std::binary_function<const wchar_t *, const wchar_t *, bool> {
        public:
            bool operator()(const wchar_t* val1, const wchar_t* val2) const;
        };

        class String: public std::binary_function<const std::string&, const std::string&, bool> {
        public:
            bool operator()(const std::string& val1, const std::string& val2) const;
        };


        template<typename T>
        class Generic: public std::binary_function<const T&, const T&, bool> {
        public:
            bool operator()(const T& val1, const T& val2) {
                return val1 == val2;
            }
        };
    };


    class NamedObject {
    public:
        virtual ~NamedObject();
        virtual std::string getObjectName() const = 0;
        virtual bool instanceOf(const std::string &otherObject) const;
    };


    class Comparable : public NamedObject {
    public:
        virtual ~Comparable() {}
        /// todo: overload operator=()?
        virtual int32_t compareTo(NamedObject* o) = 0;
    };
}



#endif //UNTITLED_EQUATORS_H
