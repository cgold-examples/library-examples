cmake_minimum_required(VERSION 3.4)
project(bar)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

add_library(bar bar.cpp bar1.cpp)

####
# Installation (https://github.com/forexample/package-example)

set(config_install_dir "lib/cmake/${PROJECT_NAME}")

# Configuration
set(project_config "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake")
set(targets_export_name "${PROJECT_NAME}Targets")
set(namespace "${PROJECT_NAME}::")

# Include module with fuction 'write_basic_package_version_file'
include(CMakePackageConfigHelpers)

# Use variables:
#   * targets_export_name
#   * PROJECT_NAME
configure_package_config_file(
    "cmake/Config.cmake.in"
    "${project_config}"
    INSTALL_DESTINATION "${config_install_dir}"
)

install(
    TARGETS bar
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
)

install(
    FILES "${project_config}"
    DESTINATION "${config_install_dir}"
)

install(
    EXPORT "${targets_export_name}"
    NAMESPACE "${namespace}"
    DESTINATION "${config_install_dir}"
)
