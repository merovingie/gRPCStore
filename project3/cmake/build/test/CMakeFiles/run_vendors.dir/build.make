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
CMAKE_COMMAND = /home/rimon/.local/bin/cmake

# The command to remove a file.
RM = /home/rimon/.local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rimon/project3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rimon/project3/cmake/build

# Include any dependencies generated for this target.
include test/CMakeFiles/run_vendors.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/run_vendors.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/run_vendors.dir/flags.make

test/CMakeFiles/run_vendors.dir/vendor.cc.o: test/CMakeFiles/run_vendors.dir/flags.make
test/CMakeFiles/run_vendors.dir/vendor.cc.o: ../../test/vendor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rimon/project3/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/run_vendors.dir/vendor.cc.o"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_vendors.dir/vendor.cc.o -c /home/rimon/project3/test/vendor.cc

test/CMakeFiles/run_vendors.dir/vendor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_vendors.dir/vendor.cc.i"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rimon/project3/test/vendor.cc > CMakeFiles/run_vendors.dir/vendor.cc.i

test/CMakeFiles/run_vendors.dir/vendor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_vendors.dir/vendor.cc.s"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rimon/project3/test/vendor.cc -o CMakeFiles/run_vendors.dir/vendor.cc.s

test/CMakeFiles/run_vendors.dir/run_vendors.cc.o: test/CMakeFiles/run_vendors.dir/flags.make
test/CMakeFiles/run_vendors.dir/run_vendors.cc.o: ../../test/run_vendors.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rimon/project3/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/run_vendors.dir/run_vendors.cc.o"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_vendors.dir/run_vendors.cc.o -c /home/rimon/project3/test/run_vendors.cc

test/CMakeFiles/run_vendors.dir/run_vendors.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_vendors.dir/run_vendors.cc.i"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rimon/project3/test/run_vendors.cc > CMakeFiles/run_vendors.dir/run_vendors.cc.i

test/CMakeFiles/run_vendors.dir/run_vendors.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_vendors.dir/run_vendors.cc.s"
	cd /home/rimon/project3/cmake/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rimon/project3/test/run_vendors.cc -o CMakeFiles/run_vendors.dir/run_vendors.cc.s

# Object files for target run_vendors
run_vendors_OBJECTS = \
"CMakeFiles/run_vendors.dir/vendor.cc.o" \
"CMakeFiles/run_vendors.dir/run_vendors.cc.o"

# External object files for target run_vendors
run_vendors_EXTERNAL_OBJECTS =

bin/run_vendors: test/CMakeFiles/run_vendors.dir/vendor.cc.o
bin/run_vendors: test/CMakeFiles/run_vendors.dir/run_vendors.cc.o
bin/run_vendors: test/CMakeFiles/run_vendors.dir/build.make
bin/run_vendors: /lib/libgrpc++.a
bin/run_vendors: external/libp3protolib.a
bin/run_vendors: /lib/libgrpc.a
bin/run_vendors: /lib/libz.a
bin/run_vendors: /lib/libcares.a
bin/run_vendors: /lib/libaddress_sorting.a
bin/run_vendors: /lib/libre2.a
bin/run_vendors: /lib/libabsl_hash.a
bin/run_vendors: /lib/libabsl_city.a
bin/run_vendors: /lib/libabsl_wyhash.a
bin/run_vendors: /lib/libabsl_raw_hash_set.a
bin/run_vendors: /lib/libabsl_hashtablez_sampler.a
bin/run_vendors: /lib/libabsl_exponential_biased.a
bin/run_vendors: /lib/libabsl_statusor.a
bin/run_vendors: /lib/libabsl_bad_variant_access.a
bin/run_vendors: /lib/libgpr.a
bin/run_vendors: /lib/libupb.a
bin/run_vendors: /lib/libabsl_status.a
bin/run_vendors: /lib/libabsl_cord.a
bin/run_vendors: /lib/libabsl_str_format_internal.a
bin/run_vendors: /lib/libabsl_synchronization.a
bin/run_vendors: /lib/libabsl_stacktrace.a
bin/run_vendors: /lib/libabsl_symbolize.a
bin/run_vendors: /lib/libabsl_debugging_internal.a
bin/run_vendors: /lib/libabsl_demangle_internal.a
bin/run_vendors: /lib/libabsl_graphcycles_internal.a
bin/run_vendors: /lib/libabsl_malloc_internal.a
bin/run_vendors: /lib/libabsl_time.a
bin/run_vendors: /lib/libabsl_strings.a
bin/run_vendors: /lib/libabsl_throw_delegate.a
bin/run_vendors: /lib/libabsl_strings_internal.a
bin/run_vendors: /lib/libabsl_base.a
bin/run_vendors: /lib/libabsl_spinlock_wait.a
bin/run_vendors: /lib/libabsl_int128.a
bin/run_vendors: /lib/libabsl_civil_time.a
bin/run_vendors: /lib/libabsl_time_zone.a
bin/run_vendors: /lib/libabsl_bad_optional_access.a
bin/run_vendors: /lib/libabsl_raw_logging_internal.a
bin/run_vendors: /lib/libabsl_log_severity.a
bin/run_vendors: /lib/libssl.a
bin/run_vendors: /lib/libcrypto.a
bin/run_vendors: /lib/libprotobuf.a
bin/run_vendors: test/CMakeFiles/run_vendors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rimon/project3/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/run_vendors"
	cd /home/rimon/project3/cmake/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run_vendors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/run_vendors.dir/build: bin/run_vendors

.PHONY : test/CMakeFiles/run_vendors.dir/build

test/CMakeFiles/run_vendors.dir/clean:
	cd /home/rimon/project3/cmake/build/test && $(CMAKE_COMMAND) -P CMakeFiles/run_vendors.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/run_vendors.dir/clean

test/CMakeFiles/run_vendors.dir/depend:
	cd /home/rimon/project3/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rimon/project3 /home/rimon/project3/test /home/rimon/project3/cmake/build /home/rimon/project3/cmake/build/test /home/rimon/project3/cmake/build/test/CMakeFiles/run_vendors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/run_vendors.dir/depend
