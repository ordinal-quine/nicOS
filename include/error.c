#include "error.h"

void bsod(int error){
	clear_screen(0x1f);
	center_print("***nicOS ERROR***",0x1f);
	printf("nicOS Encountered an error and needed to stop your computer.",0x1f);
	printf("\n\nError Code:",0x1f);
	printInt(error,0x1f);
	for(;;);
}//end bsod()

void bsodmsg(string message){
	clear_screen(0x1f);
	center_print("***nicOS ERROR***",0x1f);
	printf("nicOS Encountered an error and needed to stop your computer.",0x1f);
	printf("\n\nError Code: ",0x1f);
	printf(message,0x1f);
	for(;;);
}//end bsodmsg()