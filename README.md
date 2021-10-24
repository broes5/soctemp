# Soctemp
Soctemp is a convenient little C program that prints the temperature of a Raspberry Pi's SoC in degrees celsius. It should work correctly on any Raspberry Pi model running running Linux, though I've only run it on the 3B+.

# Compiling and installing soctemp
It can be compiled and installed to /usr/local/bin or /home/$USER/bin using the following commands:  
cc soctemp.c -o soctemp  
mv soctemp /usr/local/bin
