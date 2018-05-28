# SConsLibBuild
A test code to demonstrate how to build a shared library with absolute paths on MacOSX using scons

The soncs input files are designed to mimic the code base that is actually used for the production environment so where possble configuration branches have been maintained. For the purposes of this project, only the MacOSX configuratio is (mostly) operational.

To build the project type:
scons fc=gfortran cc=gcc libBuild=1 dynamicLibBuild=1 install install_dir=lib release=0.

This will compile the code and install dylibs in 2 places. For now, the linking is only using relative paths so the user will need to arrange the files to mimic the dependency list.

