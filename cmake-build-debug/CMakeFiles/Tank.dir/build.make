# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/haojin/CLionProjects/Tank

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/haojin/CLionProjects/Tank/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Tank.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tank.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tank.dir/flags.make

CMakeFiles/Tank.dir/main.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tank.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/main.cpp.o -c /Users/haojin/CLionProjects/Tank/main.cpp

CMakeFiles/Tank.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/main.cpp > CMakeFiles/Tank.dir/main.cpp.i

CMakeFiles/Tank.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/main.cpp -o CMakeFiles/Tank.dir/main.cpp.s

CMakeFiles/Tank.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/main.cpp.o.requires

CMakeFiles/Tank.dir/main.cpp.o.provides: CMakeFiles/Tank.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/main.cpp.o.provides

CMakeFiles/Tank.dir/main.cpp.o.provides.build: CMakeFiles/Tank.dir/main.cpp.o


CMakeFiles/Tank.dir/Bullet.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/Bullet.cpp.o: ../Bullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tank.dir/Bullet.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/Bullet.cpp.o -c /Users/haojin/CLionProjects/Tank/Bullet.cpp

CMakeFiles/Tank.dir/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/Bullet.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/Bullet.cpp > CMakeFiles/Tank.dir/Bullet.cpp.i

CMakeFiles/Tank.dir/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/Bullet.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/Bullet.cpp -o CMakeFiles/Tank.dir/Bullet.cpp.s

CMakeFiles/Tank.dir/Bullet.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/Bullet.cpp.o.requires

CMakeFiles/Tank.dir/Bullet.cpp.o.provides: CMakeFiles/Tank.dir/Bullet.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/Bullet.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/Bullet.cpp.o.provides

CMakeFiles/Tank.dir/Bullet.cpp.o.provides.build: CMakeFiles/Tank.dir/Bullet.cpp.o


CMakeFiles/Tank.dir/Tank.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/Tank.cpp.o: ../Tank.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Tank.dir/Tank.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/Tank.cpp.o -c /Users/haojin/CLionProjects/Tank/Tank.cpp

CMakeFiles/Tank.dir/Tank.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/Tank.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/Tank.cpp > CMakeFiles/Tank.dir/Tank.cpp.i

CMakeFiles/Tank.dir/Tank.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/Tank.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/Tank.cpp -o CMakeFiles/Tank.dir/Tank.cpp.s

CMakeFiles/Tank.dir/Tank.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/Tank.cpp.o.requires

CMakeFiles/Tank.dir/Tank.cpp.o.provides: CMakeFiles/Tank.dir/Tank.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/Tank.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/Tank.cpp.o.provides

CMakeFiles/Tank.dir/Tank.cpp.o.provides.build: CMakeFiles/Tank.dir/Tank.cpp.o


CMakeFiles/Tank.dir/gameMap.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/gameMap.cpp.o: ../gameMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Tank.dir/gameMap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/gameMap.cpp.o -c /Users/haojin/CLionProjects/Tank/gameMap.cpp

CMakeFiles/Tank.dir/gameMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/gameMap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/gameMap.cpp > CMakeFiles/Tank.dir/gameMap.cpp.i

CMakeFiles/Tank.dir/gameMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/gameMap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/gameMap.cpp -o CMakeFiles/Tank.dir/gameMap.cpp.s

CMakeFiles/Tank.dir/gameMap.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/gameMap.cpp.o.requires

CMakeFiles/Tank.dir/gameMap.cpp.o.provides: CMakeFiles/Tank.dir/gameMap.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/gameMap.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/gameMap.cpp.o.provides

CMakeFiles/Tank.dir/gameMap.cpp.o.provides.build: CMakeFiles/Tank.dir/gameMap.cpp.o


CMakeFiles/Tank.dir/MainWindow.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/MainWindow.cpp.o: ../MainWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Tank.dir/MainWindow.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/MainWindow.cpp.o -c /Users/haojin/CLionProjects/Tank/MainWindow.cpp

CMakeFiles/Tank.dir/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/MainWindow.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/MainWindow.cpp > CMakeFiles/Tank.dir/MainWindow.cpp.i

CMakeFiles/Tank.dir/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/MainWindow.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/MainWindow.cpp -o CMakeFiles/Tank.dir/MainWindow.cpp.s

CMakeFiles/Tank.dir/MainWindow.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/MainWindow.cpp.o.requires

CMakeFiles/Tank.dir/MainWindow.cpp.o.provides: CMakeFiles/Tank.dir/MainWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/MainWindow.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/MainWindow.cpp.o.provides

CMakeFiles/Tank.dir/MainWindow.cpp.o.provides.build: CMakeFiles/Tank.dir/MainWindow.cpp.o


CMakeFiles/Tank.dir/EveryThing.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/EveryThing.cpp.o: ../EveryThing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Tank.dir/EveryThing.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/EveryThing.cpp.o -c /Users/haojin/CLionProjects/Tank/EveryThing.cpp

CMakeFiles/Tank.dir/EveryThing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/EveryThing.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/EveryThing.cpp > CMakeFiles/Tank.dir/EveryThing.cpp.i

CMakeFiles/Tank.dir/EveryThing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/EveryThing.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/EveryThing.cpp -o CMakeFiles/Tank.dir/EveryThing.cpp.s

CMakeFiles/Tank.dir/EveryThing.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/EveryThing.cpp.o.requires

CMakeFiles/Tank.dir/EveryThing.cpp.o.provides: CMakeFiles/Tank.dir/EveryThing.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/EveryThing.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/EveryThing.cpp.o.provides

CMakeFiles/Tank.dir/EveryThing.cpp.o.provides.build: CMakeFiles/Tank.dir/EveryThing.cpp.o


CMakeFiles/Tank.dir/StartMainWindow.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/StartMainWindow.cpp.o: ../StartMainWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Tank.dir/StartMainWindow.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/StartMainWindow.cpp.o -c /Users/haojin/CLionProjects/Tank/StartMainWindow.cpp

CMakeFiles/Tank.dir/StartMainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/StartMainWindow.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/StartMainWindow.cpp > CMakeFiles/Tank.dir/StartMainWindow.cpp.i

CMakeFiles/Tank.dir/StartMainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/StartMainWindow.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/StartMainWindow.cpp -o CMakeFiles/Tank.dir/StartMainWindow.cpp.s

CMakeFiles/Tank.dir/StartMainWindow.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/StartMainWindow.cpp.o.requires

CMakeFiles/Tank.dir/StartMainWindow.cpp.o.provides: CMakeFiles/Tank.dir/StartMainWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/StartMainWindow.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/StartMainWindow.cpp.o.provides

CMakeFiles/Tank.dir/StartMainWindow.cpp.o.provides.build: CMakeFiles/Tank.dir/StartMainWindow.cpp.o


CMakeFiles/Tank.dir/Wall.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/Wall.cpp.o: ../Wall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Tank.dir/Wall.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/Wall.cpp.o -c /Users/haojin/CLionProjects/Tank/Wall.cpp

CMakeFiles/Tank.dir/Wall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/Wall.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/Wall.cpp > CMakeFiles/Tank.dir/Wall.cpp.i

CMakeFiles/Tank.dir/Wall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/Wall.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/Wall.cpp -o CMakeFiles/Tank.dir/Wall.cpp.s

CMakeFiles/Tank.dir/Wall.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/Wall.cpp.o.requires

CMakeFiles/Tank.dir/Wall.cpp.o.provides: CMakeFiles/Tank.dir/Wall.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/Wall.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/Wall.cpp.o.provides

CMakeFiles/Tank.dir/Wall.cpp.o.provides.build: CMakeFiles/Tank.dir/Wall.cpp.o


CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o: CMakeFiles/Tank.dir/flags.make
CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o: Tank_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o -c /Users/haojin/CLionProjects/Tank/cmake-build-debug/Tank_autogen/mocs_compilation.cpp

CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haojin/CLionProjects/Tank/cmake-build-debug/Tank_autogen/mocs_compilation.cpp > CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.i

CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haojin/CLionProjects/Tank/cmake-build-debug/Tank_autogen/mocs_compilation.cpp -o CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.s

CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tank.dir/build.make CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o


# Object files for target Tank
Tank_OBJECTS = \
"CMakeFiles/Tank.dir/main.cpp.o" \
"CMakeFiles/Tank.dir/Bullet.cpp.o" \
"CMakeFiles/Tank.dir/Tank.cpp.o" \
"CMakeFiles/Tank.dir/gameMap.cpp.o" \
"CMakeFiles/Tank.dir/MainWindow.cpp.o" \
"CMakeFiles/Tank.dir/EveryThing.cpp.o" \
"CMakeFiles/Tank.dir/StartMainWindow.cpp.o" \
"CMakeFiles/Tank.dir/Wall.cpp.o" \
"CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o"

# External object files for target Tank
Tank_EXTERNAL_OBJECTS =

Tank: CMakeFiles/Tank.dir/main.cpp.o
Tank: CMakeFiles/Tank.dir/Bullet.cpp.o
Tank: CMakeFiles/Tank.dir/Tank.cpp.o
Tank: CMakeFiles/Tank.dir/gameMap.cpp.o
Tank: CMakeFiles/Tank.dir/MainWindow.cpp.o
Tank: CMakeFiles/Tank.dir/EveryThing.cpp.o
Tank: CMakeFiles/Tank.dir/StartMainWindow.cpp.o
Tank: CMakeFiles/Tank.dir/Wall.cpp.o
Tank: CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o
Tank: CMakeFiles/Tank.dir/build.make
Tank: /Users/haojin/Qt5.10.0/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets
Tank: /Users/haojin/Qt5.10.0/5.10.0/clang_64/lib/QtGui.framework/QtGui
Tank: /Users/haojin/Qt5.10.0/5.10.0/clang_64/lib/QtCore.framework/QtCore
Tank: CMakeFiles/Tank.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable Tank"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tank.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tank.dir/build: Tank

.PHONY : CMakeFiles/Tank.dir/build

CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/main.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/Bullet.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/Tank.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/gameMap.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/MainWindow.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/EveryThing.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/StartMainWindow.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/Wall.cpp.o.requires
CMakeFiles/Tank.dir/requires: CMakeFiles/Tank.dir/Tank_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/Tank.dir/requires

CMakeFiles/Tank.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tank.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tank.dir/clean

CMakeFiles/Tank.dir/depend:
	cd /Users/haojin/CLionProjects/Tank/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/haojin/CLionProjects/Tank /Users/haojin/CLionProjects/Tank /Users/haojin/CLionProjects/Tank/cmake-build-debug /Users/haojin/CLionProjects/Tank/cmake-build-debug /Users/haojin/CLionProjects/Tank/cmake-build-debug/CMakeFiles/Tank.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tank.dir/depend

