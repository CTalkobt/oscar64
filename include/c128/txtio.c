#define HASH #

#define escEmit(N, K) inline void N() \
  { __asm {\
     lda HASH 27; \
     jsr $ffd2; \
     lda HASH K; \
     jsr $ffd2; \
  } }

escEmit(txtEraseEOL, 'q')
escEmit(txtEraseEOS, '@')
escEmit(txtEraseSOL, 'p')
escEmit(txtMoveBOL, 'j')
escEmit(txtMoveEOL, 'k');
escEmit(txtLineDel, 'd');

escEmit(txtLineIns, 'i')
escEmit(txtTabDefault, 'y')
escEmit(txtTabClearAll, 'z')
escEmit(txtScrollOn, 'l')
escEmit(txtNoScroll, 'm')

escEmit(txtScrollUp, 'v')
escEmit(txtScrollDown, 'w')
escEmit(txtBellEnable, 'g')
escEmit(txtNoBell, 'h')
escEmit(txtCursornoFlash, 'e')
escEmit(txtCursorFlash, 'f')
escEmit(txtCursorUnderline, 'u')
escEmit(txtCursorBlock, 's')
escEmit(txtWindowBottom, 'b')
escEmit(txtWindowTop, 't')

escEmit(txtSwapDisplay, 'x')
escEmit(txtScreenReverse, 'r')
escEmit(txtScreenNoReverse, 'n')

#undef escEmit
