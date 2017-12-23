cmake_minimum_required(VERSION 3.8)

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/yanaxgrishkova/hunter/archive/v0.1.tar.gz"
    SHA1 "8238708ef68f34a6cbba00896ca677ee6a00a5ab"
)

project(sorting_algorithms_project)
set(sorting_algorithms_project_VERSION_MAJOR 0)
set(sorting_algorithms_project_VERSION_MINOR 1)
set(sorting_algorithms_project_VERSION_PATCH 0)
set(sorting_algorithms_project_VERSION_TWEAK 0)
set(sorting_algorithms_project_VERSION ${sorting_algorithms_project_E_VERSION_MAJOR}.${sorting_algorithms_project_VERSION_MINOR}.${sorting_algorithms_project_VERSION_PATCH}.${sorting_algorithms_project_VERSION_TWEAK})
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" OFF)
option(BUILD_EXAMPLES "Build Examples" OFF)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>  
    $<INSTALL_INTERFACE:include>
)

if(BUILD_TESTS)
  hunter_add_package(Catch)
  find_package(Catch CONFIG REQUIRED)

  enable_testing()

  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(tests ${${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(tests ${PROJECT_NAME} Catch::Catch )

  add_test(NAME test_name COMMAND tests "-s" "-r" "compact" "--use-colour" "yes") 
endif()

if(BUILD_EXAMPLES)
    file(GLOB EXAMPLE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/examples/*.cpp")
    foreach(EXAMPLE_SOURCE ${EXAMPLE_SOURCES})
        get_filename_component(EXAMPLE_NAME ${EXAMPLE_SOURCE} NAME_WE)
        set(EXAMPLE_TARGET_NAME example_${EXAMPLE_NAME})
        add_executable(${EXAMPLE_TARGET_NAME} ${EXAMPLE_SOURCE})
        target_link_libraries(${EXAMPLE_TARGET_NAME} ${PROJECT_NAME})
        set_target_properties(${EXAMPLE_TARGET_NAME} PROPERTIES OUTPUT_NAME ${EXAMPLE_NAME})
        install(TARGETS ${EXAMPLE_TARGET_NAME}
                RUNTIME DESTINATION bin
                )
    endforeach(EXAMPLE_SOURCE ${EXAMPLE_SOURCES})
endif()

install(TARGETS sorting_algorithms_project
    EXPORT sorting_algorithms_project-config
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ DESTINATION include)
install(EXPORT sorting_algorithms_project-config DESTINATION cmake)

include(CPackConfig.cmake)
