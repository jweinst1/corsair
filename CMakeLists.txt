cmake_minimum_required(VERSION 3.5)

# Project Corsair begins here #
PROJECT(corsair)

# Version Tracker #
SET(corsair_version_major 0)
SET(corsair_version_minor 0)
SET(corsair_version_patch 1)
SET(corsair_version "${corsair_version_major}.${cosair_version_minor}.${corsair_version_patch}")

string(TIMESTAMP corsair_build_time)

# Enables Testing for project #
enable_testing()

# Corsair subdirs #
add_subdirectory(core)
add_subdirectory(cli)

# Writes build version to receipt file.
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/build_receipt.txt "Corsair Build\n  Version ${corsair_version}\n  Built at : ${corsair_build_time}\n")