How to install and cross compile the WFDB library to target

# Introduction #

How to install the WFDB library for Linux and cross compile it to the ARM target

First download the WFDB library from here:

http://www.physionet.org/physiotools/wfdb.shtml#downloading


# Details #

1. sudo apt-get install xviewg xviewg-dev

2. Unzip the tar file

3. Run ./configure in the wfdb directory

4. Run make

**Cross compile to target.**

See copy of wfdb-lib-arm.tar.z in Downloads

- contains library files and modified Makefile ready for cross compile

Else edit the Makefile manual in the lib directory of wfdb

1. Change the install directory of wfdb to:

/home/stud/wfdb-arm

2. Change the compiler to:

arm-none-linux-gnueabi-gcc

Change it for the CC and linker part

3. Run make

4. Run make install

5. Change the eclipse application project to include wfdb:

/home/stud/wfdb-arm/include

6. Change the eclipse project to include the wfdb library in:

-l wfdb
/home/stud/wfdb-arm/lib