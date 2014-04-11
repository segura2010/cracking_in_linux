cracking_in_linux
=================

Learning cracking in linux.

To generate binaries:

g++ crackme0.cpp -o crackme0 

g++ crackme1.cpp -o crackme1


Compilar para arquitectura de 32bits en debian: 

sudo aptitude install g++-multilib gcc-multilib
g++ -m32 crackme0.cpp -o crackme0
