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
CMAKE_BINARY_DIR = /home/rimon/project3/build2

# Include any dependencies generated for this target.
include src/CMakeFiles/store.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/store.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/store.dir/flags.make

src/CMakeFiles/store.dir/store.cc.o: src/CMakeFiles/store.dir/flags.make
src/CMakeFiles/store.dir/store.cc.o: ../src/store.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rimon/project3/build2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/store.dir/store.cc.o"
	cd /home/rimon/project3/build2/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/store.dir/store.cc.o -c /home/rimon/project3/src/store.cc

src/CMakeFiles/store.dir/store.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/store.dir/store.cc.i"
	cd /home/rimon/project3/build2/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rimon/project3/src/store.cc > CMakeFiles/store.dir/store.cc.i

src/CMakeFiles/store.dir/store.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/store.dir/store.cc.s"
	cd /home/rimon/project3/build2/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rimon/project3/src/store.cc -o CMakeFiles/store.dir/store.cc.s

# Object files for target store
store_OBJECTS = \
"CMakeFiles/store.dir/store.cc.o"

# External object files for target store
store_EXTERNAL_OBJECTS =

bin/store: src/CMakeFiles/store.dir/store.cc.o
bin/store: src/CMakeFiles/store.dir/build.make
bin/store: /lib/libgrpc++.a
bin/store: external/libp3protolib.a
bin/store: /lib/libgrpc.a
bin/store: /lib/libz.a
bin/store: /lib/libcares.a
bin/store: /lib/libaddress_sorting.a
bin/store: /lib/libre2.a
bin/store: /lib/libabsl_hash.a
bin/store: /lib/libabsl_city.a
bin/store: /lib/libabsl_wyhash.a
bin/store: /lib/libabsl_raw_hash_set.a
bin/store: /lib/libabsl_hashtablez_sampler.a
bin/store: /lib/libabsl_exponential_biased.a
bin/store: /lib/libabsl_statusor.a
bin/store: /lib/libabsl_bad_variant_access.a
bin/store: /lib/libgpr.a
bin/store: /lib/libupb.a
bin/store: /lib/libabsl_status.a
bin/store: /lib/libabsl_cord.a
bin/store: /lib/libabsl_str_format_internal.a
bin/store: /lib/libabsl_synchronization.a
bin/store: /lib/libabsl_stacktrace.a
bin/store: /lib/libabsl_symbolize.a
bin/store: /lib/libabsl_debugging_internal.a
bin/store: /lib/libabsl_demangle_internal.a
bin/store: /lib/libabsl_graphcycles_internal.a
bin/store: /lib/libabsl_malloc_internal.a
bin/store: /lib/libabsl_time.a
bin/store: /lib/libabsl_strings.a
bin/store: /lib/libabsl_throw_delegate.a
bin/store: /lib/libabsl_strings_internal.a
bin/store: /lib/libabsl_base.a
bin/store: /lib/libabsl_spinlock_wait.a
bin/store: /lib/libabsl_int128.a
bin/store: /lib/libabsl_civil_time.a
bin/store: /lib/libabsl_time_zone.a
bin/store: /lib/libabsl_bad_optional_access.a
bin/store: /lib/libabsl_raw_logging_internal.a
bin/store: /lib/libabsl_log_severity.a
bin/store: /lib/libssl.a
bin/store: /lib/libcrypto.a
bin/store: /lib/libprotobuf.a
bin/store: src/CMakeFiles/store.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rimon/project3/build2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/store"
	cd /home/rimon/project3/build2/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/store.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "symbolic link /home/rimon/project3/build2/bin/vendor_addresses.txt created."
	cd /home/rimon/project3/build2/src && /home/rimon/.local/bin/cmake -E create_symlink /home/rimon/project3/src/vendor_addresses.txt /home/rimon/project3/build2/bin/vendor_addresses.txt

# Rule to build all files generated by this target.
src/CMakeFiles/store.dir/build: bin/store

.PHONY : src/CMakeFiles/store.dir/build

src/CMakeFiles/store.dir/clean:
	cd /home/rimon/project3/build2/src && $(CMAKE_COMMAND) -P CMakeFiles/store.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/store.dir/clean

src/CMakeFiles/store.dir/depend:
	cd /home/rimon/project3/build2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rimon/project3 /home/rimon/project3/src /home/rimon/project3/build2 /home/rimon/project3/build2/src /home/rimon/project3/build2/src/CMakeFiles/store.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/store.dir/depend

