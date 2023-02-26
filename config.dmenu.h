// 2022-10-31 11:43:34 +0100 bcbc1ef5c4cf4875a4d66e7dc0919da88a6096a5 readstdin: add a comment
// 2022-10-04 19:36:02 +0200 1d2b462acf1210b8f86966b8dd9bb6e36e369ee1 bump version to 5.2 (tag: 5.2)
// 2014-09-17 13:40:11 +0200 13a529ce63364544bdc851dfd5d3aa2ef8740914 applied Hiltjo's patch as suggested on the ml to fix ControlMask for C-j and C-m

static const char *fonts[]		= {	"monospace:size=8" };
static const char *colors[SchemeLast][2] = {
	//			fg		bg
	[SchemeNorm]	= {	"#ffffff",	"#404040" },
	[SchemeSel]	= {	"#ffffff",	"#800000" },
	[SchemeOut]	= {	"#ffffff",	"#008000" },
};

static int topbar			= 0;
static unsigned int lines		= 20;
static const char *prompt		= ">";
static const char worddelimiters[]	= " ";

// end of file
