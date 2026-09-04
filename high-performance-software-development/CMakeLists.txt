# CMakeList.txt : Top-level CMake project file
#
cmake_minimum_required (VERSION 3.20)
cmake_policy(SET CMP0076 NEW)

enable_testing()
project ("asgn")

include("CMakeConf.cmake")

#MAKE_TARGET("MACRO" "macro")
#MAKE_TARGET("LEVEN" "leven")
MAKE_TARGET("BSEARCH" "bsearch")
#MAKE_TARGET("MATRIX" "matrix")
MAKE_TARGET("FW" "fw")
MAKE_TARGET("DCNN" "dcnn")

add_subdirectory ("asgn")
add_subdirectory ("sol")

FLUSH_DOXYGEN()
