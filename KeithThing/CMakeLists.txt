# CMakeList.txt : CMake project for stuff, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/headers)
set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(TARGET_H
    ${HEADERS}/Consonant.h
)

set(TARGET_SRC
    main.cpp
    ${SRC}/Consonant.cpp
)

# Add source to this project's executable.
add_executable (CMakeTarget ${TARGET_H} ${TARGET_SRC})

target_include_directories(CMakeTarget PRIVATE ${HEADERS})
target_include_directories(CMakeTarget PRIVATE ${SRC})

# TODO: Add tests and install targets if needed.
