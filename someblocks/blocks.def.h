//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"", "echo $(cat /sys/class/power_supply/BAT0/capacity)%",     		5,		0},
	{"", "awk -F\"[][]\" '/Left:/ { print $2 }' <(amixer sget Master)",     1,		44},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
