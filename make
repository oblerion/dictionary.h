#! /bin/sh
cd src
rm *.o
gcc -c *.c 
gcc *.o -o ../main
