# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/timmy/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/timmy/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build"

# Include any dependencies generated for this target.
include CMakeFiles/EOS_112_1_5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EOS_112_1_5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EOS_112_1_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EOS_112_1_5.dir/flags.make

CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o: CMakeFiles/EOS_112_1_5.dir/flags.make
CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o: /home/timmy/Embeded\ OS/EOS_Pretest/EOS_112_1/src/EOS_112_1_5.c
CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o: CMakeFiles/EOS_112_1_5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o -MF CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o.d -o CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o -c "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/src/EOS_112_1_5.c"

CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/src/EOS_112_1_5.c" > CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.i

CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/src/EOS_112_1_5.c" -o CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.s

# Object files for target EOS_112_1_5
EOS_112_1_5_OBJECTS = \
"CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o"

# External object files for target EOS_112_1_5
EOS_112_1_5_EXTERNAL_OBJECTS =

EOS_112_1_5: CMakeFiles/EOS_112_1_5.dir/src/EOS_112_1_5.c.o
EOS_112_1_5: CMakeFiles/EOS_112_1_5.dir/build.make
EOS_112_1_5: CMakeFiles/EOS_112_1_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable EOS_112_1_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EOS_112_1_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EOS_112_1_5.dir/build: EOS_112_1_5
.PHONY : CMakeFiles/EOS_112_1_5.dir/build

CMakeFiles/EOS_112_1_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EOS_112_1_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EOS_112_1_5.dir/clean

CMakeFiles/EOS_112_1_5.dir/depend:
	cd "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1" "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1" "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build" "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build" "/home/timmy/Embeded OS/EOS_Pretest/EOS_112_1/build/CMakeFiles/EOS_112_1_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EOS_112_1_5.dir/depend

