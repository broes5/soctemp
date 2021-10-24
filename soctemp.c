#include <stdio.h>
#include <stdlib.h>

//	Soctemp: print Raspberry Pi system-on-chip temperature.
//	Written by Benjamin Roeser

int main() 
{
	FILE *fp;  
	char buff[5];	// creating char array to store contents of file  
	fp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");  
	fscanf(fp, "%s", buff);
	fclose(fp);  
	
	float temp = atoi(buff);  
	printf("%.3f°C\n", (temp / 1000));
	return 0;
}
