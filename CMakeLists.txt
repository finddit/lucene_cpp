cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        untitled
        main.cpp
        store/Directory.cpp
        store/Directory.h
        store/IndexOutput.cpp
        store/IndexOutput.h
        store/IOContext.cpp
        store/IOContext.h
        store/AlreadyClosedException.cpp
        store/AlreadyClosedException.h
        store/BaseDirectory.cpp
        store/BaseDirectory.h
        store/BufferedChecksum.cpp
        store/BufferedChecksum.h
        store/BufferedChecksumIndexInput.cpp
        store/BufferedChecksumIndexInput.h
        store/BufferedIndexInput.cpp
        store/BufferedIndexInput.h
        store/ByteArrayDataInput.cpp
        store/ByteArrayDataInput.h
        store/ByteArrayDataOutput.cpp
        store/ByteArrayDataOutput.h
        store/ByteBufferGuard.cpp
        store/ByteBufferGuard.h
        store/ByteBufferIndexInput.cpp
        store/ByteBufferIndexInput.h
        store/NRTCachingDirectory.cpp
        store/NRTCachingDirectory.h
        store/FilterDirectory.cpp
        store/FilterDirectory.h
        search/AutomatonQuery.cpp
        search/AutomatonQuery.h)