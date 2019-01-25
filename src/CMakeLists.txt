cmake_minimum_required(VERSION 3.2)
project(emulator)

set(TARGET_NAME emulator)

include(CMakeSources.cmake)

add_executable(${TARGET_NAME} ${SOURCES} ${COMMON})
install(TARGETS ${TARGET_NAME} DESTINATION ${EMULATOR_INSTALL_BIN_DIR})

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
if(APPLE)
    target_link_directories(${TARGET_NAME} PRIVATE /usr/local/opt/llvm/lib/)
    target_link_libraries(${TARGET_NAME} PRIVATE c++fs)
elseif()
    target_link_libraries(${TARGET_NAME} PRIVATE stdc++fs)
endif()
