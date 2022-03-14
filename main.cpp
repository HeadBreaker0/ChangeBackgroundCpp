#include <windows.h>

int main()
{
    SystemParametersInfo( SPI_SETDESKWALLPAPER, 0, (PVOID)"C:\\Windows\\photo.png", SPIF_UPDATEINIFILE );
}

/* As you can see, you need to use 2 bars instead of 1. I dont have a idea why. Example: 
/* Correct: C:\\Users\\Public\\pumpkin.png
/* Wrong: C:\Users\Public\pumpking.png
/* Enjoy!
