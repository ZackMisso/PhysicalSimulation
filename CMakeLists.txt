cmake_minimum_required (VERSION 2.6)
project (physsim)

# Build NanoGUI
set(NANOGUI_BUILD_EXAMPLE OFF CACHE BOOL " " FORCE)
set(NANOGUI_BUILD_SHARED  OFF CACHE BOOL " " FORCE)
set(NANOGUI_BUILD_PYTHON  OFF CACHE BOOL " " FORCE)
add_subdirectory(nanogui)
set_property(TARGET glfw glfw_objects nanogui PROPERTY FOLDER "dependencies")

set(GLFW_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/nanogui/ext/glfw/include)
set(GLEW_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/nanogui/ext/glew/include)
set(NANOVG_INCLUDE_DIR
${CMAKE_CURRENT_SOURCE_DIR}/nanogui/ext/nanovg/src)
set(NANOGUI_INCLUDE_DIR
${CMAKE_CURRENT_SOURCE_DIR}/nanogui/include)
set(EIGEN_INCLUDE_DIR
${CMAKE_CURRENT_SOURCE_DIR}/nanogui/ext/eigen)

include_directories(
    # linear algebra library
    ${EIGEN_INCLUDE_DIR}
    # UI library
    ${NANOGUI_INCLUDE_DIR}
)

add_executable(physsim main.cpp)

target_link_libraries(physsim nanogui ${NANOGUI_EXTRA_LIBS})
