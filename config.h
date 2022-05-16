static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"","cat /tmp/recordingicon 2>/dev/null",0,	9},
	{" ⌨ ","sb-kbselect",			0,	30},
	{"","sb-music",				0,	11},
	{"","sb-nettraf",			1,	16},
	{"","sb-volume",			0,	10},
	/*{"","sb-battery",			5,	3},*/
	{"","sb-clock",				60,	1},
	{"","sb-internet",			5,	4},
};

static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

