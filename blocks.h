//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"📁 ", "nfolder", 						0, 11 },
	{"🔊 ", "pamixer --get-volume-human", 	0, 10},
	{"🕐 ", "date '+%a, %d.%m.%Y %H:%M%p'", 5, 0},		// i.e. Fr, 08.09.2023 21:19
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
