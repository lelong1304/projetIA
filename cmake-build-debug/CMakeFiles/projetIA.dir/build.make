# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/long/CLionProjects/projetIA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/long/CLionProjects/projetIA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/projetIA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/projetIA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projetIA.dir/flags.make

CMakeFiles/projetIA.dir/src/main.cpp.o: CMakeFiles/projetIA.dir/flags.make
CMakeFiles/projetIA.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/projetIA.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/projetIA.dir/src/main.cpp.o -c /Users/long/CLionProjects/projetIA/src/main.cpp

CMakeFiles/projetIA.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projetIA.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/long/CLionProjects/projetIA/src/main.cpp > CMakeFiles/projetIA.dir/src/main.cpp.i

CMakeFiles/projetIA.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projetIA.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/long/CLionProjects/projetIA/src/main.cpp -o CMakeFiles/projetIA.dir/src/main.cpp.s

CMakeFiles/projetIA.dir/src/Input.cpp.o: CMakeFiles/projetIA.dir/flags.make
CMakeFiles/projetIA.dir/src/Input.cpp.o: ../src/Input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/projetIA.dir/src/Input.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/projetIA.dir/src/Input.cpp.o -c /Users/long/CLionProjects/projetIA/src/Input.cpp

CMakeFiles/projetIA.dir/src/Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projetIA.dir/src/Input.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/long/CLionProjects/projetIA/src/Input.cpp > CMakeFiles/projetIA.dir/src/Input.cpp.i

CMakeFiles/projetIA.dir/src/Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projetIA.dir/src/Input.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/long/CLionProjects/projetIA/src/Input.cpp -o CMakeFiles/projetIA.dir/src/Input.cpp.s

CMakeFiles/projetIA.dir/src/Iris.cpp.o: CMakeFiles/projetIA.dir/flags.make
CMakeFiles/projetIA.dir/src/Iris.cpp.o: ../src/Iris.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/projetIA.dir/src/Iris.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/projetIA.dir/src/Iris.cpp.o -c /Users/long/CLionProjects/projetIA/src/Iris.cpp

CMakeFiles/projetIA.dir/src/Iris.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projetIA.dir/src/Iris.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/long/CLionProjects/projetIA/src/Iris.cpp > CMakeFiles/projetIA.dir/src/Iris.cpp.i

CMakeFiles/projetIA.dir/src/Iris.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projetIA.dir/src/Iris.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/long/CLionProjects/projetIA/src/Iris.cpp -o CMakeFiles/projetIA.dir/src/Iris.cpp.s

CMakeFiles/projetIA.dir/src/Image.cpp.o: CMakeFiles/projetIA.dir/flags.make
CMakeFiles/projetIA.dir/src/Image.cpp.o: ../src/Image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/projetIA.dir/src/Image.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/projetIA.dir/src/Image.cpp.o -c /Users/long/CLionProjects/projetIA/src/Image.cpp

CMakeFiles/projetIA.dir/src/Image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projetIA.dir/src/Image.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/long/CLionProjects/projetIA/src/Image.cpp > CMakeFiles/projetIA.dir/src/Image.cpp.i

CMakeFiles/projetIA.dir/src/Image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projetIA.dir/src/Image.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/long/CLionProjects/projetIA/src/Image.cpp -o CMakeFiles/projetIA.dir/src/Image.cpp.s

# Object files for target projetIA
projetIA_OBJECTS = \
"CMakeFiles/projetIA.dir/src/main.cpp.o" \
"CMakeFiles/projetIA.dir/src/Input.cpp.o" \
"CMakeFiles/projetIA.dir/src/Iris.cpp.o" \
"CMakeFiles/projetIA.dir/src/Image.cpp.o"

# External object files for target projetIA
projetIA_EXTERNAL_OBJECTS =

projetIA: CMakeFiles/projetIA.dir/src/main.cpp.o
projetIA: CMakeFiles/projetIA.dir/src/Input.cpp.o
projetIA: CMakeFiles/projetIA.dir/src/Iris.cpp.o
projetIA: CMakeFiles/projetIA.dir/src/Image.cpp.o
projetIA: CMakeFiles/projetIA.dir/build.make
projetIA: CMakeFiles/projetIA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable projetIA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/projetIA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projetIA.dir/build: projetIA

.PHONY : CMakeFiles/projetIA.dir/build

CMakeFiles/projetIA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/projetIA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/projetIA.dir/clean

CMakeFiles/projetIA.dir/depend:
	cd /Users/long/CLionProjects/projetIA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/long/CLionProjects/projetIA /Users/long/CLionProjects/projetIA /Users/long/CLionProjects/projetIA/cmake-build-debug /Users/long/CLionProjects/projetIA/cmake-build-debug /Users/long/CLionProjects/projetIA/cmake-build-debug/CMakeFiles/projetIA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/projetIA.dir/depend
