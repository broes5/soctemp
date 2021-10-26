# Soctemp
Soctemp is a convenient little C program that prints the temperature of a Raspberry Pi's SoC in degrees celsius.
It should work correctly on any Raspberry Pi model running running Linux, though I've only run it on the 3B+.  

It works by reading the contents of /sys/class/thermal/thermal_zone0/temp, which contains a Raspberry Pi's SoC temperature in milli-degrees celsius, converts it to celsius and then prints it to the terminal.

Soctemp can be run by the watch command in order to monitor the temperature of a Pi's SoC continusly using:  
~~~
watch -n1 soctemp
~~~

# Compiling and installing soctemp
It can be compiled and installed to /usr/local/bin or /home/$USER/bin using the following commands:  
~~~
cc soctemp.c -o soctemp
sudo mv soctemp /usr/local/bin
~~~
