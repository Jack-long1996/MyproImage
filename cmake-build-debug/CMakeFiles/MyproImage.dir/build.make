# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jack-\CLionProjects\MyproImage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MyproImage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyproImage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyproImage.dir/flags.make

CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj: CMakeFiles/MyproImage.dir/flags.make
CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj: CMakeFiles/MyproImage.dir/includes_CXX.rsp
CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj: MyproImage_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyproImage.dir\MyproImage_autogen\mocs_compilation.cpp.obj -c C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\MyproImage_autogen\mocs_compilation.cpp

CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.i"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\MyproImage_autogen\mocs_compilation.cpp > CMakeFiles\MyproImage.dir\MyproImage_autogen\mocs_compilation.cpp.i

CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.s"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\MyproImage_autogen\mocs_compilation.cpp -o CMakeFiles\MyproImage.dir\MyproImage_autogen\mocs_compilation.cpp.s

CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj: CMakeFiles/MyproImage.dir/flags.make
CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj: CMakeFiles/MyproImage.dir/includes_CXX.rsp
CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj: ../src/RGBDImage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyproImage.dir\src\RGBDImage.cpp.obj -c C:\Users\Jack-\CLionProjects\MyproImage\src\RGBDImage.cpp

CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.i"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jack-\CLionProjects\MyproImage\src\RGBDImage.cpp > CMakeFiles\MyproImage.dir\src\RGBDImage.cpp.i

CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.s"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jack-\CLionProjects\MyproImage\src\RGBDImage.cpp -o CMakeFiles\MyproImage.dir\src\RGBDImage.cpp.s

CMakeFiles/MyproImage.dir/src/main.cpp.obj: CMakeFiles/MyproImage.dir/flags.make
CMakeFiles/MyproImage.dir/src/main.cpp.obj: CMakeFiles/MyproImage.dir/includes_CXX.rsp
CMakeFiles/MyproImage.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyproImage.dir/src/main.cpp.obj"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyproImage.dir\src\main.cpp.obj -c C:\Users\Jack-\CLionProjects\MyproImage\src\main.cpp

CMakeFiles/MyproImage.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyproImage.dir/src/main.cpp.i"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jack-\CLionProjects\MyproImage\src\main.cpp > CMakeFiles\MyproImage.dir\src\main.cpp.i

CMakeFiles/MyproImage.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyproImage.dir/src/main.cpp.s"
	C:\Qt\Qt5.13.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jack-\CLionProjects\MyproImage\src\main.cpp -o CMakeFiles\MyproImage.dir\src\main.cpp.s

# Object files for target MyproImage
MyproImage_OBJECTS = \
"CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj" \
"CMakeFiles/MyproImage.dir/src/main.cpp.obj"

# External object files for target MyproImage
MyproImage_EXTERNAL_OBJECTS =

MyproImage.exe: CMakeFiles/MyproImage.dir/MyproImage_autogen/mocs_compilation.cpp.obj
MyproImage.exe: CMakeFiles/MyproImage.dir/src/RGBDImage.cpp.obj
MyproImage.exe: CMakeFiles/MyproImage.dir/src/main.cpp.obj
MyproImage.exe: CMakeFiles/MyproImage.dir/build.make
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_dnn341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_ml341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_objdetect341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_shape341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_stitching341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_superres341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_videostab341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_calib3d341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_features2d341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_flann341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_highgui341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_photo341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_video341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_videoio341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_imgcodecs341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_imgproc341.dll.a
MyproImage.exe: C:/OpenCV/opencv/MinGWBuild/install/x64/mingw/lib/libopencv_core341.dll.a
MyproImage.exe: CMakeFiles/MyproImage.dir/linklibs.rsp
MyproImage.exe: CMakeFiles/MyproImage.dir/objects1.rsp
MyproImage.exe: CMakeFiles/MyproImage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable MyproImage.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyproImage.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyproImage.dir/build: MyproImage.exe

.PHONY : CMakeFiles/MyproImage.dir/build

CMakeFiles/MyproImage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyproImage.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyproImage.dir/clean

CMakeFiles/MyproImage.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jack-\CLionProjects\MyproImage C:\Users\Jack-\CLionProjects\MyproImage C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug C:\Users\Jack-\CLionProjects\MyproImage\cmake-build-debug\CMakeFiles\MyproImage.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyproImage.dir/depend

