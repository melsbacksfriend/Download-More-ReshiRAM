// Include the most common headers from the C standard library
#include <iostream>

// Include the main libnx system header, for Switch development
#include <switch.h>
using namespace std;
// Main program entrypoint
int main(int argc, char* argv[])
{
	int VAR_RAMCOUNT = 0;
	int A = 0;
	int B = 0;
    // This example uses a text console, as a simple way to output text to the screen.
    // If you want to write a software-rendered graphics application,
    //   take a look at the graphics/simplegfx example, which uses the libnx Framebuffer API instead.
    // If on the other hand you want to write an OpenGL based application,
    //   take a look at the graphics/opengl set of examples, which uses EGL instead.
    consoleInit(NULL);

    // Other initialization goes here. As a demonstration, we print hello world.
	cout << "You are eligible to download more reshiRAM.  How much would you like to download (GB)?\n";


    // Main loop
    while (appletMainLoop())
    {
        // Scan all the inputs. This should be done once for each frame
        hidScanInput();
	
        // hidKeysDown returns information about which buttons have been
        // just pressed in this frame compared to the previous one
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS)
            break; // break in order to return to hbmenu
	if (kDown & KEY_A) VAR_RAMCOUNT = 4;
	if (kDown & KEY_X) VAR_RAMCOUNT = 8;
	if (kDown & KEY_Y) VAR_RAMCOUNT = 16;
	if (kDown & KEY_B)
{
	if (VAR_RAMCOUNT == 0) cout << "Error!  You need to select a plan first!  \n";
	if (VAR_RAMCOUNT == 4)
	{
		cout << "Downloading " << VAR_RAMCOUNT << "GB ReshiRAM\n";
		for (A = 0; A >= 0; A = A + 5)
		{
				if (A == 300 * 4) cout << "_";
				if (A == 300 * 2 * 4) cout << "_";
				if (A == 300 * 3 * 4) cout << "_";
				if (A == 300 * 4 * 4) cout << "_";
				if (A == 300 * 5 * 4) cout << "_";
				if (A == 300 * 6 * 4) cout << "_";
				if (A == 300 * 7 * 4) cout << "_";
				if (A == 300 * 8 * 4) cout << "_";
				if (A == 300 * 9 * 4) cout << "_";
				if (A == 300 * 10 * 4) cout << "_";
				if (A == 300 * 11 * 4) cout << "_";
				if (A == 300 * 12 * 4) cout << "_";
				if (A == 300 * 13 * 4) cout << "_";
				if (A == 300 * 14 * 4) cout << "_";
				if (A == 300 * 15 * 4) cout << "_";
				if (A == 300 * 16 * 4) cout << "_";
				if (A == 300 * 17 * 4) cout << "_";
				if (A == 300 * 18 * 4) cout << "_";
				if (A == 300 * 19 * 4) cout << "_";
				if (A == 300 * 20 * 4) cout << "_";
				if (A == 300 * 21 * 4) cout << "_";
				if (A == 300 * 22 * 4) cout << "_";
				if (A == 300 * 23 * 4) cout << "_";
				if (A == 300 * 24 * 4) cout << "_";
				if (A == 300 * 25 * 4) cout << "_";
				if (A == 300 * 26 * 4) cout << "_";
				if (A == 300 * 27 * 4) cout << "_";
				if (A == 300 * 28 * 4) cout << "_";
				if (A == 300 * 29 * 4) cout << "_";
				if (A == 300 * 30 * 4) cout << "_";
				if (A == 300 * 31 * 4) cout << "_";
				if (A == 300 * 32 * 4) cout << "_";
				if (A == 300 * 33 * 4) cout << "_";
				if (A == 300 * 34 * 4) cout << "_";
				if (A == 300 * 35 * 4) cout << "_";
				if (A == 300 * 36 * 4) cout << "_";
				if (A == 300 * 37 * 4) cout << "_";
				if (A == 300 * 38 * 4) cout << "_";
				if (A == 300 * 39 * 4) cout << "_";
				if (A == 300 * 40 * 4) cout << "_";
				if (A == 300 * 41 * 4) cout << "_";
				if (A == 300 * 42 * 4) cout << "_";
				if (A == 300 * 43 * 4) cout << "_";
				if (A == 300 * 44 * 4) cout << "_";
				if (A == 300 * 45 * 4) cout << "_";
				if (A == 300 * 46 * 4) cout << "_";
				if (A == 300 * 47 * 4) cout << "_";
				if (A == 300 * 48 * 4) cout << "_";
				if (A == 300 * 49 * 4) cout << "_";
				if (A == 300 * 50 * 4) cout << "_";
				if (A == 300 * 51 * 4) cout << "_";
				if (A == 300 * 52 * 4) cout << "_";
				if (A == 300 * 53 * 4) cout << "_";
				if (A == 300 * 54 * 4) cout << "_";
				if (A == 300 * 55 * 4) cout << "_";
				if (A == 300 * 56 * 4) cout << "_";
				if (A == 300 * 57 * 4) cout << "_";
				if (A == 300 * 58 * 4) cout << "_";
				if (A == 300 * 59 * 4) cout << "_";
				if (A == 300 * 60 * 4) cout << "_";
				if (A == 300 * 61 * 4) cout << "_";
				if (A == 300 * 62 * 4) cout << "_";
				if (A == 300 * 63 * 4) cout << "_";
				if (A == 300 * 64 * 4) cout << "_";
				if (A == 300 * 65 * 4) cout << "_";
				if (A == 300 * 66 * 4) cout << "_";
				if (A == 300 * 67 * 4) cout << "_";
				if (A == 300 * 68 * 4) cout << "_";
				if (A == 300 * 69 * 4) cout << "_";
				if (A == 300 * 70 * 4) cout << "_";
				if (A == 300 * 71 * 4) cout << "_";
				if (A == 300 * 72 * 4) cout << "_";
				if (A == 300 * 73 * 4) cout << "_";
				if (A == 300 * 74 * 4) cout << "_";
				if (A == 300 * 75 * 4) cout << "_";
				if (A == 300 * 76 * 4) cout << "_";
				if (A == 300 * 77 * 4) cout << "_";
				if (A == 300 * 78 * 4) cout << "_";
				if (A == 300 * 79 * 4) cout << "_";
				if (A == 300 * 80 * 4) cout << "_";
				if (A == 300 * 81 * 4) cout << "_";
				if (A == 300 * 82 * 4) cout << "_";
				if (A == 300 * 83 * 4) cout << "_";
				if (A == 300 * 84 * 4) cout << "_";
				if (A == 300 * 85 * 4) cout << "_";
				if (A == 300 * 86 * 4) cout << "_";
				if (A == 300 * 87 * 4) cout << "_";
				if (A == 300 * 88 * 4) cout << "_";
				if (A == 300 * 89 * 4) cout << "_";
				if (A == 300 * 90 * 4) cout << "_";
				if (A == 300 * 91 * 4) cout << "_";
				if (A == 300 * 92 * 4) cout << "_";
				if (A == 300 * 93 * 4) cout << "_";
				if (A == 300 * 94 * 4) cout << "_";
				if (A == 300 * 95 * 4) cout << "_";
				if (A == 300 * 96 * 4) cout << "_";
				if (A == 300 * 97 * 4) cout << "_";
				if (A == 300 * 98 * 4) cout << "_";
				if (A == 300 * 99 * 4) cout << "_";
				if (A == 300 * 100 * 4) cout << "_";
				if (A == 300 * 101 * 4) cout << "\nDownload Complete!";
		consoleUpdate(NULL);
		}
        consoleUpdate(NULL);
	}
	if (VAR_RAMCOUNT == 8) 
	{
		cout << "Downloading " << VAR_RAMCOUNT << "GB ReshiRAM\n";
		for (A = 0; A >= 0; A = A + 5)
		{
				if (A == 300 * 8) cout << "_";
				if (A == 300 * 2 * 8) cout << "_";
				if (A == 300 * 3 * 8) cout << "_";
				if (A == 300 * 4 * 8) cout << "_";
				if (A == 300 * 5 * 8) cout << "_";
				if (A == 300 * 6 * 8) cout << "_";
				if (A == 300 * 7 * 8) cout << "_";
				if (A == 300 * 8 * 8) cout << "_";
				if (A == 300 * 9 * 8) cout << "_";
				if (A == 300 * 10 * 8) cout << "_";
				if (A == 300 * 11 * 8) cout << "_";
				if (A == 300 * 12 * 8) cout << "_";
				if (A == 300 * 13 * 8) cout << "_";
				if (A == 300 * 14 * 8) cout << "_";
				if (A == 300 * 15 * 8) cout << "_";
				if (A == 300 * 16 * 8) cout << "_";
				if (A == 300 * 17 * 8) cout << "_";
				if (A == 300 * 18 * 8) cout << "_";
				if (A == 300 * 19 * 8) cout << "_";
				if (A == 300 * 20 * 8) cout << "_";
				if (A == 300 * 21 * 8) cout << "_";
				if (A == 300 * 22 * 8) cout << "_";
				if (A == 300 * 23 * 8) cout << "_";
				if (A == 300 * 24 * 8) cout << "_";
				if (A == 300 * 25 * 8) cout << "_";
				if (A == 300 * 26 * 8) cout << "_";
				if (A == 300 * 27 * 8) cout << "_";
				if (A == 300 * 28 * 8) cout << "_";
				if (A == 300 * 29 * 8) cout << "_";
				if (A == 300 * 30 * 8) cout << "_";
				if (A == 300 * 31 * 8) cout << "_";
				if (A == 300 * 32 * 8) cout << "_";
				if (A == 300 * 33 * 8) cout << "_";
				if (A == 300 * 34 * 8) cout << "_";
				if (A == 300 * 35 * 8) cout << "_";
				if (A == 300 * 36 * 8) cout << "_";
				if (A == 300 * 37 * 8) cout << "_";
				if (A == 300 * 38 * 8) cout << "_";
				if (A == 300 * 39 * 8) cout << "_";
				if (A == 300 * 40 * 8) cout << "_";
				if (A == 300 * 41 * 8) cout << "_";
				if (A == 300 * 42 * 8) cout << "_";
				if (A == 300 * 43 * 8) cout << "_";
				if (A == 300 * 44 * 8) cout << "_";
				if (A == 300 * 45 * 8) cout << "_";
				if (A == 300 * 46 * 8) cout << "_";
				if (A == 300 * 47 * 8) cout << "_";
				if (A == 300 * 48 * 8) cout << "_";
				if (A == 300 * 49 * 8) cout << "_";
				if (A == 300 * 50 * 8) cout << "_";
				if (A == 300 * 51 * 8) cout << "_";
				if (A == 300 * 52 * 8) cout << "_";
				if (A == 300 * 53 * 8) cout << "_";
				if (A == 300 * 54 * 8) cout << "_";
				if (A == 300 * 55 * 8) cout << "_";
				if (A == 300 * 56 * 8) cout << "_";
				if (A == 300 * 57 * 8) cout << "_";
				if (A == 300 * 58 * 8) cout << "_";
				if (A == 300 * 59 * 8) cout << "_";
				if (A == 300 * 60 * 8) cout << "_";
				if (A == 300 * 61 * 8) cout << "_";
				if (A == 300 * 62 * 8) cout << "_";
				if (A == 300 * 63 * 8) cout << "_";
				if (A == 300 * 64 * 8) cout << "_";
				if (A == 300 * 65 * 8) cout << "_";
				if (A == 300 * 66 * 8) cout << "_";
				if (A == 300 * 67 * 8) cout << "_";
				if (A == 300 * 68 * 8) cout << "_";
				if (A == 300 * 69 * 8) cout << "_";
				if (A == 300 * 70 * 8) cout << "_";
				if (A == 300 * 71 * 8) cout << "_";
				if (A == 300 * 72 * 8) cout << "_";
				if (A == 300 * 73 * 8) cout << "_";
				if (A == 300 * 74 * 8) cout << "_";
				if (A == 300 * 75 * 8) cout << "_";
				if (A == 300 * 76 * 8) cout << "_";
				if (A == 300 * 77 * 8) cout << "_";
				if (A == 300 * 78 * 8) cout << "_";
				if (A == 300 * 79 * 8) cout << "_";
				if (A == 300 * 80 * 8) cout << "_";
				if (A == 300 * 81 * 8) cout << "_";
				if (A == 300 * 82 * 8) cout << "_";
				if (A == 300 * 83 * 8) cout << "_";
				if (A == 300 * 84 * 8) cout << "_";
				if (A == 300 * 85 * 8) cout << "_";
				if (A == 300 * 86 * 8) cout << "_";
				if (A == 300 * 87 * 8) cout << "_";
				if (A == 300 * 88 * 8) cout << "_";
				if (A == 300 * 89 * 8) cout << "_";
				if (A == 300 * 90 * 8) cout << "_";
				if (A == 300 * 91 * 8) cout << "_";
				if (A == 300 * 92 * 8) cout << "_";
				if (A == 300 * 93 * 8) cout << "_";
				if (A == 300 * 94 * 8) cout << "_";
				if (A == 300 * 95 * 8) cout << "_";
				if (A == 300 * 96 * 8) cout << "_";
				if (A == 300 * 97 * 8) cout << "_";
				if (A == 300 * 98 * 8) cout << "_";
				if (A == 300 * 99 * 8) cout << "_";
				if (A == 300 * 100 * 8) cout << "_";
				if (A == 300 * 101 * 8) cout << "\nDownload Complete!";
				consoleUpdate(NULL);
		}
        		consoleUpdate(NULL);
	}
	if (VAR_RAMCOUNT == 16)
	{
		cout << "Downloading " << VAR_RAMCOUNT << "GB ReshiRAM\n";
		for (A = 0; A >= 0; A = A + 5)
		{
				if (A == 300 * 16) cout << "_";
				if (A == 300 * 2 * 16) cout << "_";
				if (A == 300 * 3 * 16) cout << "_";
				if (A == 300 * 4 * 16) cout << "_";
				if (A == 300 * 5 * 16) cout << "_";
				if (A == 300 * 6 * 16) cout << "_";
				if (A == 300 * 7 * 16) cout << "_";
				if (A == 300 * 8 * 16) cout << "_";
				if (A == 300 * 9 * 16) cout << "_";
				if (A == 300 * 10 * 16) cout << "_";
				if (A == 300 * 11 * 16) cout << "_";
				if (A == 300 * 12 * 16) cout << "_";
				if (A == 300 * 13 * 16) cout << "_";
				if (A == 300 * 14 * 16) cout << "_";
				if (A == 300 * 15 * 16) cout << "_";
				if (A == 300 * 16 * 16) cout << "_";
				if (A == 300 * 17 * 16) cout << "_";
				if (A == 300 * 18 * 16) cout << "_";
				if (A == 300 * 19 * 16) cout << "_";
				if (A == 300 * 20 * 16) cout << "_";
				if (A == 300 * 21 * 16) cout << "_";
				if (A == 300 * 22 * 16) cout << "_";
				if (A == 300 * 23 * 16) cout << "_";
				if (A == 300 * 24 * 16) cout << "_";
				if (A == 300 * 25 * 16) cout << "_";
				if (A == 300 * 26 * 16) cout << "_";
				if (A == 300 * 27 * 16) cout << "_";
				if (A == 300 * 28 * 16) cout << "_";
				if (A == 300 * 29 * 16) cout << "_";
				if (A == 300 * 30 * 16) cout << "_";
				if (A == 300 * 31 * 16) cout << "_";
				if (A == 300 * 32 * 16) cout << "_";
				if (A == 300 * 33 * 16) cout << "_";
				if (A == 300 * 34 * 16) cout << "_";
				if (A == 300 * 35 * 16) cout << "_";
				if (A == 300 * 36 * 16) cout << "_";
				if (A == 300 * 37 * 16) cout << "_";
				if (A == 300 * 38 * 16) cout << "_";
				if (A == 300 * 39 * 16) cout << "_";
				if (A == 300 * 40 * 16) cout << "_";
				if (A == 300 * 41 * 16) cout << "_";
				if (A == 300 * 42 * 16) cout << "_";
				if (A == 300 * 43 * 16) cout << "_";
				if (A == 300 * 44 * 16) cout << "_";
				if (A == 300 * 45 * 16) cout << "_";
				if (A == 300 * 46 * 16) cout << "_";
				if (A == 300 * 47 * 16) cout << "_";
				if (A == 300 * 48 * 16) cout << "_";
				if (A == 300 * 49 * 16) cout << "_";
				if (A == 300 * 50 * 16) cout << "_";
				if (A == 300 * 51 * 16) cout << "_";
				if (A == 300 * 52 * 16) cout << "_";
				if (A == 300 * 53 * 16) cout << "_";
				if (A == 300 * 54 * 16) cout << "_";
				if (A == 300 * 55 * 16) cout << "_";
				if (A == 300 * 56 * 16) cout << "_";
				if (A == 300 * 57 * 16) cout << "_";
				if (A == 300 * 58 * 16) cout << "_";
				if (A == 300 * 59 * 16) cout << "_";
				if (A == 300 * 60 * 16) cout << "_";
				if (A == 300 * 61 * 16) cout << "_";
				if (A == 300 * 62 * 16) cout << "_";
				if (A == 300 * 63 * 16) cout << "_";
				if (A == 300 * 64 * 16) cout << "_";
				if (A == 300 * 65 * 16) cout << "_";
				if (A == 300 * 66 * 16) cout << "_";
				if (A == 300 * 67 * 16) cout << "_";
				if (A == 300 * 68 * 16) cout << "_";
				if (A == 300 * 69 * 16) cout << "_";
				if (A == 300 * 70 * 16) cout << "_";
				if (A == 300 * 71 * 16) cout << "_";
				if (A == 300 * 72 * 16) cout << "_";
				if (A == 300 * 73 * 16) cout << "_";
				if (A == 300 * 74 * 16) cout << "_";
				if (A == 300 * 75 * 16) cout << "_";
				if (A == 300 * 76 * 16) cout << "_";
				if (A == 300 * 77 * 16) cout << "_";
				if (A == 300 * 78 * 16) cout << "_";
				if (A == 300 * 79 * 16) cout << "_";
				if (A == 300 * 80 * 16) cout << "_";
				if (A == 300 * 81 * 16) cout << "_";
				if (A == 300 * 82 * 16) cout << "_";
				if (A == 300 * 83 * 16) cout << "_";
				if (A == 300 * 84 * 16) cout << "_";
				if (A == 300 * 85 * 16) cout << "_";
				if (A == 300 * 86 * 16) cout << "_";
				if (A == 300 * 87 * 16) cout << "_";
				if (A == 300 * 88 * 16) cout << "_";
				if (A == 300 * 89 * 16) cout << "_";
				if (A == 300 * 90 * 16) cout << "_";
				if (A == 300 * 91 * 16) cout << "_";
				if (A == 300 * 92 * 16) cout << "_";
				if (A == 300 * 93 * 16) cout << "_";
				if (A == 300 * 94 * 16) cout << "_";
				if (A == 300 * 95 * 16) cout << "_";
				if (A == 300 * 96 * 16) cout << "_";
				if (A == 300 * 97 * 16) cout << "_";
				if (A == 300 * 98 * 16) cout << "_";
				if (A == 300 * 99 * 16) cout << "_";
				if (A == 300 * 100 * 16) cout << "_";
				if (A == 300 * 101 * 16) cout << "\nDownload Complete!";
			        consoleUpdate(NULL);
		}
        		consoleUpdate(NULL);
	}
        	consoleUpdate(NULL);
}
        // Your code goes here

        // Update the console, sending a new frame to the display
        consoleUpdate(NULL);
    }

    // Deinitialize and clean up resources used by the console (important!)
    consoleExit(NULL);
    return 0;
}
