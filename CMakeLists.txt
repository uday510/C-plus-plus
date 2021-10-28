cmake_minimum_required(VERSION 3.20)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Pointers/Pointers)
include_directories(Project1/Project1)

add_executable(c__
        Array/Array/Array.cpp
        Conditional/Conditional/Conditional.cpp
        HelloWorld/HelloWorld/HelloWorld/HelloWorld.cpp
        Integers/Integers/Integers.cpp
        loop_with_pointer/loop_with_pointer/loop_with_pointer.cpp
        Pointers/Pointers/main2.h
        Pointers/Pointers/Pointers.cpp
        Pointers2/Pointers2/Pointers2.cpp
        Project1/Project1/main.cpp
        Project1/Project1/main.h
        Project1/for_loop.cpp
        try_catch/try_catch/try_catch.cpp
        basic_operations.cpp
        bitwise_operator.cpp
        dummy.cpp
        dummy.h
        enum.cpp
        float.cpp
        for_and_foreach.cpp
        forWithPointer.cpp
        function_basic.cpp
        linker.cpp
        memory_leaks.cpp
        static_keyword.cpp
        strongly_typed.cpp
        struct.cpp
        switch.cpp
        tempCodeRunnerFile.cpp
        try_catch.cpp
        while.cpp)
