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
CMAKE_COMMAND = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.19.2/bin/cmake

# The command to remove a file.
RM = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.19.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/Vessel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/Vessel/build

# Include any dependencies generated for this target.
include imgui/CMakeFiles/imgui.dir/depend.make

# Include the progress variables for this target.
include imgui/CMakeFiles/imgui.dir/progress.make

# Include the compile flags for this target's objects.
include imgui/CMakeFiles/imgui.dir/flags.make

imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.o: imgui/CMakeFiles/imgui.dir/flags.make
imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.o: ../imgui/imgui_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/Vessel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.o"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imgui.dir/imgui_demo.cpp.o -c /workspace/Vessel/imgui/imgui_demo.cpp

imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_demo.cpp.i"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/Vessel/imgui/imgui_demo.cpp > CMakeFiles/imgui.dir/imgui_demo.cpp.i

imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_demo.cpp.s"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/Vessel/imgui/imgui_demo.cpp -o CMakeFiles/imgui.dir/imgui_demo.cpp.s

imgui/CMakeFiles/imgui.dir/imgui.cpp.o: imgui/CMakeFiles/imgui.dir/flags.make
imgui/CMakeFiles/imgui.dir/imgui.cpp.o: ../imgui/imgui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/Vessel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object imgui/CMakeFiles/imgui.dir/imgui.cpp.o"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imgui.dir/imgui.cpp.o -c /workspace/Vessel/imgui/imgui.cpp

imgui/CMakeFiles/imgui.dir/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui.cpp.i"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/Vessel/imgui/imgui.cpp > CMakeFiles/imgui.dir/imgui.cpp.i

imgui/CMakeFiles/imgui.dir/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui.cpp.s"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/Vessel/imgui/imgui.cpp -o CMakeFiles/imgui.dir/imgui.cpp.s

imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.o: imgui/CMakeFiles/imgui.dir/flags.make
imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.o: ../imgui/imgui_draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/Vessel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.o"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imgui.dir/imgui_draw.cpp.o -c /workspace/Vessel/imgui/imgui_draw.cpp

imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_draw.cpp.i"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/Vessel/imgui/imgui_draw.cpp > CMakeFiles/imgui.dir/imgui_draw.cpp.i

imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_draw.cpp.s"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/Vessel/imgui/imgui_draw.cpp -o CMakeFiles/imgui.dir/imgui_draw.cpp.s

imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.o: imgui/CMakeFiles/imgui.dir/flags.make
imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.o: ../imgui/imgui_widgets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/Vessel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.o"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imgui.dir/imgui_widgets.cpp.o -c /workspace/Vessel/imgui/imgui_widgets.cpp

imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_widgets.cpp.i"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/Vessel/imgui/imgui_widgets.cpp > CMakeFiles/imgui.dir/imgui_widgets.cpp.i

imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_widgets.cpp.s"
	cd /workspace/Vessel/build/imgui && /bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/Vessel/imgui/imgui_widgets.cpp -o CMakeFiles/imgui.dir/imgui_widgets.cpp.s

# Object files for target imgui
imgui_OBJECTS = \
"CMakeFiles/imgui.dir/imgui_demo.cpp.o" \
"CMakeFiles/imgui.dir/imgui.cpp.o" \
"CMakeFiles/imgui.dir/imgui_draw.cpp.o" \
"CMakeFiles/imgui.dir/imgui_widgets.cpp.o"

# External object files for target imgui
imgui_EXTERNAL_OBJECTS =

imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/imgui_demo.cpp.o
imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/imgui.cpp.o
imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/imgui_draw.cpp.o
imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/imgui_widgets.cpp.o
imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/build.make
imgui/libimgui.a: imgui/CMakeFiles/imgui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/Vessel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libimgui.a"
	cd /workspace/Vessel/build/imgui && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean_target.cmake
	cd /workspace/Vessel/build/imgui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imgui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
imgui/CMakeFiles/imgui.dir/build: imgui/libimgui.a

.PHONY : imgui/CMakeFiles/imgui.dir/build

imgui/CMakeFiles/imgui.dir/clean:
	cd /workspace/Vessel/build/imgui && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean.cmake
.PHONY : imgui/CMakeFiles/imgui.dir/clean

imgui/CMakeFiles/imgui.dir/depend:
	cd /workspace/Vessel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/Vessel /workspace/Vessel/imgui /workspace/Vessel/build /workspace/Vessel/build/imgui /workspace/Vessel/build/imgui/CMakeFiles/imgui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : imgui/CMakeFiles/imgui.dir/depend

