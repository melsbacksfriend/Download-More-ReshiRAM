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
	if (kDown & KEY_A) VAR_RAMCOUNT++;
	if (kDown & KEY_B)
{
	if (VAR_RAMCOUNT == 0) VAR_RAMCOUNT = 1;
	if (VAR_RAMCOUNT > 0)
	{
		cout << "Downloading " << VAR_RAMCOUNT << "GB ReshiRAM\n";
		for (A = 0; A >= 0; A = A + 5)
		{
				A = A * VAR_RAMCOUNT;
				if (A == 300 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 2 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 3 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 4 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 5 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 6 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 7 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 8 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 9 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 10 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 11 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 12 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 13 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 14 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 15 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 16 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 17 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 18 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 19 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 20 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 21 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 22 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 23 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 24 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 25 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 26 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 27 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 28 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 29 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 30 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 31 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 32 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 33 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 34 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 35 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 36 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 37 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 38 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 39 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 40 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 41 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 42 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 43 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 44 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 45 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 46 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 47 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 48 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 49 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 50 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 51 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 52 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 53 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 54 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 55 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 56 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 57 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 58 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 59 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 60 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 61 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 62 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 63 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 64 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 65 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 66 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 67 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 68 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 69 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 70 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 71 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 72 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 73 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 74 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 75 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 76 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 77 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 78 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 79 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 80 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 81 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 82 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 83 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 84 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 85 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 86 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 87 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 88 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 89 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 90 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 91 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 92 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 93 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 94 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 95 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 96 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 97 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 98 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 99 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 100 * VAR_RAMCOUNT) cout << "_";
				if (A == 300 * 101 * VAR_RAMCOUNT) cout << "\nDownload Complete!";
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
