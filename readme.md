# Udemy Tutorial about CMake
https://www.udemy.com/course/cmake-clarifie-maitrisez-vos-projets-cc


Fill the install folder: cmd "make install"

-------------------------------------

Error: When configure project with "cmake path" cmd:

include could not find requested file: /.../build/conan_toolchain.cmake

Solution: Type cmd in the build folder: conan install .. -s build_type=Debug -s compiler.cppstd=17 --output-folder=. --build missing

-------------------------------------

Error: When configure project with "cmake path" cmd:

CMake Error at build/cmakedeps_macros.cmake:98 (message):
  Please, set the CMAKE_BUILD_TYPE variable when calling to CMake adding the
  '-DCMAKE_BUILD_TYPE=<build_type>' argument.

Solution:  Configure all projects from CMake Extension in VSC UI