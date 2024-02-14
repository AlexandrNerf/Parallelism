cmake_minimum_required (VERSION 3.8)

project ("Sinus")

add_executable (sinus "res.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sinus PROPERTY CXX_STANDARD 20)
endif()

option(DOUBLE "Double toggle" OFF)

if (DOUBLE)
	target_compile_definitions(sinus PRIVATE USE_DOUBLE=1)
endif()
