#ifndef TXTIO_C128_H
#define TXTIO_C128_H

#include <conio.h>
#pragma compile("txtio.c")

// Cancel Quote and insert mode. 
inline void txtNoQuoteInsMode(); // ESC-O
// Enable auto-insert mode.
inline void txtInsMode();        // ESC-A
// Disable auto-insert mode. 
inline void txtNoInsMode();      // ESC-C

// Erase to End of Line.
inline void txtEraseEOL(); // ESC-Q
// Erase to End of Screen
inline void txtEraseEOS(); // ESC-@
// Erase to Start of Line. 
inline void txtEraseSOL(); // ESC-P
// Move to start of current line.
inline void txtMoveBOL(); // ESC-J
// Move to end of current line.
inline void txtMoveEOL();  // ESC-K

// Delete at current line.
inline void txtLineDel();  // ESC-D
// Insert at current line.
inline void txtLineIns();  // ESC-I

// Set default tabs (8 spaces)
inline void txtTabDefault(); // ESC-Y
// Clear all tabs. 
inline void txtTabClearAll(); // ESC-Z

// Enable scrolling.
inline void txtScrollOn();   // ESC-L
// Disable scrolling. 
inline void txtNoScroll();   // ESC-M
// Scroll up. 
inline void txtScrollUp();   // ESC-V
// Scroll down.
inline void txtScrollDown(); // ESC-W

// Enable bell (Ctrl-G)
inline void txtBellEnable(); // ESC-G
// Disable bell 
inline void txtNoBell();     // ESC-H

// Enable non-flashing cursor
inline void txtCursorNoFlash(); // ESC-E
// Enable flashing cursor
inline void txtCursorFlash();   // ESC-F
// Enable underline cursor (80 col display only)
inline void txtCursorUnderline();  // ESC-U
// Enable block cursor (80 col display only)
inline void txtCursorBlock();      // ESC-S

// Set bottom of screen window at cursor position. 
inline void txtWindowBottom(); // ESC-B
// Set top of screen window at cursor position.
inline void txtWindowTop();    // ESC-T

// Swap 40/80 column display output device. 
inline void txtSwapDisplay();   // ESC-X

// Set screen to reverse video. 
inline void txtScreenReverse();  // ESC-R
// Set screen to not reverse video
inline void txtScreenNoReverse(); // ESC-N


#endif
