# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\code is here\calculateFinal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code is here\calculateFinal\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/calculateFinal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculateFinal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculateFinal.dir/flags.make

CMakeFiles/calculateFinal.dir/main.cpp.obj: CMakeFiles/calculateFinal.dir/flags.make
CMakeFiles/calculateFinal.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code is here\calculateFinal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculateFinal.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\calculateFinal.dir\main.cpp.obj -c "D:\code is here\calculateFinal\main.cpp"

CMakeFiles/calculateFinal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculateFinal.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code is here\calculateFinal\main.cpp" > CMakeFiles\calculateFinal.dir\main.cpp.i

CMakeFiles/calculateFinal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculateFinal.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code is here\calculateFinal\main.cpp" -o CMakeFiles\calculateFinal.dir\main.cpp.s

# Object files for target calculateFinal
calculateFinal_OBJECTS = \
"CMakeFiles/calculateFinal.dir/main.cpp.obj"

# External object files for target calculateFinal
calculateFinal_EXTERNAL_OBJECTS =

calculateFinal.exe: CMakeFiles/calculateFinal.dir/main.cpp.obj
calculateFinal.exe: CMakeFiles/calculateFinal.dir/build.make
calculateFinal.exe: CMakeFiles/calculateFinal.dir/linklibs.rsp
calculateFinal.exe: CMakeFiles/calculateFinal.dir/objects1.rsp
calculateFinal.exe: CMakeFiles/calculateFinal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code is here\calculateFinal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calculateFinal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\calculateFinal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculateFinal.dir/build: calculateFinal.exe

.PHONY : CMakeFiles/calculateFinal.dir/build

CMakeFiles/calculateFinal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\calculateFinal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/calculateFinal.dir/clean

CMakeFiles/calculateFinal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code is here\calculateFinal" "D:\code is here\calculateFinal" "D:\code is here\calculateFinal\cmake-build-debug" "D:\code is here\calculateFinal\cmake-build-debug" "D:\code is here\calculateFinal\cmake-build-debug\CMakeFiles\calculateFinal.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/calculateFinal.dir/depend

