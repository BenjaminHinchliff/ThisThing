# CMakeList.txt : CMake project for stuff, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(TARGET_H
    main.h
    Consonant.h
)

set(TARGET_SRC
    main.cpp
    Consonant.cpp
)

# Add source to this project's executable.
add_executable (CMakeTarget ${TARGET_H} ${TARGET_SRC})

# TODO: Add tests and install targets if needed.
