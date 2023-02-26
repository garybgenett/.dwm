// 2023-02-17 11:05:09 +0600 348f6559ab0d4793db196ffa56ba96ab95a594a6 config.mk: update to _XOPEN_SOURCE=700L
// 2023-01-28 12:53:48 +0100 712d6639ff8e863560328131bbb92b248dc9cde7 Use sigaction(SA_NOCLDWAIT) for SIGCHLD handling
// 2022-10-04 19:35:13 +0200 50ad171eea9db5ccb36fce2592e047c3282975ff bump version to 6.4 (tag: 6.4)
// 2014-11-23 15:25:35 +0100 35db6d8afc3fd9f80166feac6c1e4adf71d553c3 removed .hgtags, thanks Dimitris for spotting

static const char *fonts[]		= {	"monospace:size=8" };
static const char dmenufont[]		=	"monospace:size=8";
static const char *colors[][3] = {
	//			fg		bg		border
	[SchemeNorm]	= {	"#ffffff",	"#404040",	"#000000" },
	[SchemeSel]	= {	"#ffffff",	"#800000",	"#ff0000" },
};

static const unsigned int borderpx	= 2;
static const unsigned int snap		= 32;
static const int showbar		= 1;
static const int topbar			= 1;
static const int resizehints		= 1;
static const int lockfullscreen		= 1;
static const int statusall		= 1;

static const float mfact		= 0.35;
static const int nmaster		= 1;
static const int nviews			= 3;

// *************************************

static const float facts[]		= { 0,		0,	0.5,	0 };
static const int masters[]		= { 0,		-1,	0,	-1 };
static const int views[]		= { 0,		0,	0,	~0 };
static const int toggles[4][2]		= { {0,8},	{0,8},	{0,8},	{~0,~0} };

// *************************************

static const char *tags[] = { ".term", ".look", ".mail", ".view", "_read", "_hear", "_pics", "/misc", "+task" };

static const Layout layouts[] = {
	// symbol	arrange function
	{ "[T]",	tile },
	{ "[F]",	NULL },
	{ "[M]",	monocle },
};

// WM_CLASS(STRING) = instance, class
// WM_NAME(STRING) = title
static const Rule rules[] = {
	// class			instance	title			tags mask	isfloating	monitor
	{ "URxvt",			NULL,		"urxvt",		1 << 0,		False,		-1 },
	{ "URxvt",			NULL,		"bash",			1 << 0,		False,		-1 },
	{ "URxvt",			NULL,		"shell-root",		1 << 8,		False,		0 },
	{ "Gkrellm",			NULL,		NULL,			~0,		True,		0 },
	{ "XClock",			NULL,		NULL,			~0,		True,		0 },
	{ "Xdialog",			NULL,		"Notice",		~0,		True,		0 },
	{ "feh",			NULL,		"Notice",		~0,		True,		0 },
	{ "XVkbd",			NULL,		NULL,			~0,		True,		0 },
	{ "Qalculate-gtk",		NULL,		NULL,			~0,		True,		0 },
	{ "KeePassXC",			NULL,		NULL,			-0,		True,		1 },
	{ "firefox-esr",		NULL,		NULL,			1 << 1,		False,		1 },
	{ "firefox-esr",		"Places",	NULL,			~0,		True,		1 },
	{ "thunderbird",		NULL,		NULL,			1 << 2,		False,		2 },
	{ "thunderbird",		"Calendar",	NULL,			~0,		True,		2 },
	{ "thunderbird",		"Msgcompose",	NULL,			~0,		True,		2 },
	{ "Remote-viewer",		NULL,		NULL,			1 << 3,		False,		-1 },
	{ "VirtualBox",			NULL,		NULL,			1 << 3,		False,		-1 },
	{ "Links",			NULL,		NULL,			1 << 4,		False,		-1 },
	{ "tabbed",			"Surf",		NULL,			1 << 4,		False,		-1 },
	{ "Chromium-browser-chromium",	NULL,		NULL,			1 << 4,		False,		1 },
	{ "Chromium-browser-chromium",	NULL,		"Tabs Outliner",	~0,		True,		1 },
	{ NULL,				"libreoffice",	NULL,			1 << 4,		False,		-1 },
	{ "Stardict",			NULL,		NULL,			1 << 4,		False,		-1 },
	{ "Calibre",			NULL,		NULL,			1 << 4,		False,		-1 },
	{ "feh",			NULL,		NULL,			1 << 4,		True,		-1 },
	{ "vlc",			NULL,		NULL,			1 << 5,		False,		0 },
	{ "URxvt",			NULL,		"mixer",		1 << 5,		True,		0 },
	{ "Pavucontrol",		NULL,		NULL,			1 << 5,		True,		-1 },
	{ "synaesthesia",		NULL,		NULL,			1 << 5,		True,		-1 },
	{ "URxvt",			NULL,		"_synaesthesia",	1 << 5,		True,		-1 },
	{ "projectM-pulseaudio",	NULL,		NULL,			1 << 5,		True,		-1 },
	{ "URxvt",			NULL,		"_projectm",		1 << 5,		True,		-1 },
	{ "Ardour",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "Audacity",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "Gimp",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "Hydrogen",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "lmms",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "openshot",			NULL,		NULL,			1 << 6,		True,		-1 },
	{ "Vncviewer",			NULL,		NULL,			1 << 7,		True,		-1 },
	{ "scrcpy",			NULL,		NULL,			1 << 7,		True,		-1 },
	{ "Slack",			NULL,		NULL,			1 << 7,		False,		-1 },
	{ "zoom",			NULL,		NULL,			1 << 7,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:0 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:0 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:0 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:0 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:1 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:1 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:1 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:1 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:2 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:2 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:2 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:2 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:3 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:3 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:3 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:3 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:4 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:4 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:4 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:4 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:5 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:5 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:5 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:5 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:6 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:6 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:6 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:6 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:7 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:7 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:7 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:7 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:8 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:8 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:8 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:8 (4)",		1 << 3,		False,		-1 },
	{ "remote-viewer",		NULL,		"SPICE:9 (1)",		1 << 3,		False,		2 },
	{ "remote-viewer",		NULL,		"SPICE:9 (2)",		1 << 3,		False,		1 },
	{ "remote-viewer",		NULL,		"SPICE:9 (3)",		1 << 3,		False,		0 },
	{ "remote-viewer",		NULL,		"SPICE:9 (4)",		1 << 3,		False,		-1 },
};

// *****************************************************************************

#define CMD(cmd) { .v = (const char*[]){ "/bin/bash", "-c", cmd, NULL } }

static char dmenumon[2] = "0";
static const char *dmenucmd[] = { "_menu", "dmenu", NULL };

#define MOD Mod4Mask
#define SFT ShiftMask
#define CTL ControlMask
#define ALT Mod1Mask

// *************************************

//>>>	{ MOD,		KEY,	toggleview,	{.ui = 1 << TAG} },
//>>>	{ MOD|ALT,	KEY,	view,		{.ui = 1 << TAG} },
#define TAGKEYS(KEY,TAG) \
	{ MOD,		KEY,	ntoggleview,	{.ui = 1 << TAG} }, \
	{ MOD|ALT,	KEY,	nview,		{.ui = 1 << TAG} }, \
	{ MOD|CTL,	KEY,	tag,		{.ui = 1 << TAG} }, \
	{ MOD|CTL|ALT,	KEY,	toggletag,	{.ui = 1 << TAG} },

static Key keys[] = {
	// modifier		key		function		argument
//>>>	{ MOD,			XK_0,		view,			{.ui = ~0} },
//>>>	{ MOD|ALT,		XK_0,		view,			{.ui = ~0} },
	{ MOD,			XK_0,		nview,			{.ui = ~0} },
	{ MOD|ALT,		XK_0,		nview,			{.ui = ~0} },
	{ MOD|CTL,		XK_0,		tag,			{.ui = ~0} },
	{ MOD|CTL|ALT,		XK_0,		tag,			{.ui = ~0} },
	TAGKEYS(		XK_1,					0)
	TAGKEYS(		XK_2,					1)
	TAGKEYS(		XK_3,					2)
	TAGKEYS(		XK_4,					3)
	TAGKEYS(		XK_5,					4)
	TAGKEYS(		XK_6,					5)
	TAGKEYS(		XK_7,					6)
	TAGKEYS(		XK_8,					7)
	TAGKEYS(		XK_9,					8)

	{ MOD|SFT,		XK_0,		spawn,			CMD("_menu app-0") },
	{ MOD|SFT,		XK_1,		spawn,			CMD("_menu app-1") },
	{ MOD|SFT,		XK_2,		spawn,			CMD("_menu app-2") },
	{ MOD|SFT,		XK_3,		spawn,			CMD("_menu app-3") },
	{ MOD|SFT,		XK_4,		spawn,			CMD("_menu app-4") },
	{ MOD|SFT,		XK_5,		spawn,			CMD("_menu app-5") },
	{ MOD|SFT,		XK_6,		spawn,			CMD("_menu app-6") },
	{ MOD|SFT,		XK_7,		spawn,			CMD("_menu app-7") },
	{ MOD|SFT,		XK_8,		spawn,			CMD("_menu app-8") },
	{ MOD|SFT,		XK_9,		spawn,			CMD("_menu app-9") },

	{ MOD,			XK_grave,	reset_view,		{0} },
	{ MOD|SFT,		XK_grave,	spawn,			CMD("_menu setup-dwm") },

	{ MOD,			XK_Escape,	spawn,			CMD("_menu lookup") },
	{ MOD|SFT,		XK_Escape,	togglebar,		{0} },

	{ MOD,			XK_BackSpace,	spawn,			CMD("_menu retreat") },
	{ MOD|SFT,		XK_BackSpace,	quit,			{0} },
	{ MOD|ALT,		XK_BackSpace,	spawn,			CMD("_menu respawn/dns") },
	{ MOD|SFT|ALT,		XK_BackSpace,	spawn,			CMD("_menu respawn") },
	{ MOD|CTL,		XK_BackSpace,	spawn,			CMD("_menu recluse") },
	{ MOD|SFT|CTL,		XK_BackSpace,	spawn,			CMD("_menu respite") },

	{ MOD,			XK_space,	togglefloating,		{0} },
	{ MOD|SFT,		XK_space,	spawn,			CMD("_menu gkrellm") },
	{ MOD|ALT,		XK_space,	spawn,			CMD("_menu xclock") },
	{ MOD|CTL,		XK_space,	spawn,			CMD("_menu calculator") },
	{ MOD|SFT|ALT,		XK_space,	spawn,			CMD("_menu keyboard") },
	{ MOD|SFT|CTL,		XK_space,	spawn,			CMD("_menu writing") },

	{ MOD,			XK_Return,	zoom,			{0} },
	{ MOD|SFT,		XK_Return,	spawn,			{.v = dmenucmd} },
	{ MOD|ALT,		XK_Return,	spawn,			CMD("_menu terminal") },
	{ MOD|CTL,		XK_Return,	spawn,			CMD("_menu console") },
	{ MOD|CTL|ALT,		XK_Return,	spawn,			CMD("_menu shell") },

//>>>	{ MOD,			XK_Tab,		view,			{0} },
	{ MOD,			XK_Tab,		nview,			{0} },
//>>>	{ ALT,			XK_Tab,		focusstack,		{.i = +1} },
//>>>	{ ALT|SFT,		XK_Tab,		focusstack,		{.i = -1} },
	{ ALT,			XK_Tab,		swapfocus,		{0} },

	{ MOD,			XK_semicolon,	killclient,		{0} },
	{ MOD,			XK_comma,	focusmon,		{.i = +1} },
	{ MOD|SFT,		XK_comma,	tagmon,			{.i = +1} },
	{ MOD,			XK_period,	focusmon,		{.i = -1} },
	{ MOD|SFT,		XK_period,	tagmon,			{.i = -1} },

	{ MOD,			XK_a,		spawn,			CMD("_menu xsel-copy") },
	{ MOD,			XK_z,		spawn,			CMD("_menu xsel-paste") },

	{ MOD,			XK_i,		incnmaster,		{.i = +1} },
	{ MOD,			XK_o,		incnmaster,		{.i = -1} },
	{ MOD,			XK_h,		setmfact,		{.f = -0.05} },
	{ MOD,			XK_j,		focusstack,		{.i = +1} },
	{ MOD|SFT,		XK_j,		pushdown,		{0} },
	{ MOD,			XK_k,		focusstack,		{.i = -1} },
	{ MOD|SFT,		XK_k,		pushup,			{0} },
	{ MOD,			XK_l,		setmfact,		{.f = +0.05} },

	{ MOD,			XK_F1,		setlayout,		{.v = &layouts[0]} },
	{ MOD,			XK_F2,		setlayout,		{.v = &layouts[1]} },
	{ MOD,			XK_F3,		setlayout,		{.v = &layouts[2]} },
};

// *************************************

static Button buttons[] = {
	// click		event mask	button		function	argument
	{ ClkStatusText,	0,		Button1,	spawn,		{.v = dmenucmd} },
	{ ClkStatusText,	0,		Button2,	spawn,		CMD("_menu terminal") },
	{ ClkStatusText,	0,		Button3,	spawn,		CMD("_menu console") },
	{ ClkStatusText,	MOD,		Button1,	spawn,		CMD("_menu shell") },

	{ ClkLtSymbol,		0,		Button1,	setlayout,	{.v = &layouts[0]} },
	{ ClkLtSymbol,		0,		Button2,	setlayout,	{.v = &layouts[1]} },
	{ ClkLtSymbol,		0,		Button3,	setlayout,	{.v = &layouts[2]} },

	{ ClkMonNum,		0,		Button1,	reset_view,	{0} },
	{ ClkMonNum,		MOD,		Button1,	spawn,		CMD("_menu setup-dwm") },

//>>>	{ ClkTagBar,		0,		Button1,	toggleview,	{0} },
//>>>	{ ClkTagBar,		0,		Button3,	view,		{0} },
	{ ClkTagBar,		0,		Button1,	ntoggleview,	{0} },
	{ ClkTagBar,		0,		Button3,	nview,		{0} },
	{ ClkTagBar,		MOD,		Button1,	tag,		{0} },
	{ ClkTagBar,		MOD,		Button3,	toggletag,	{0} },

	{ ClkWinTitle,		0,		Button1,	zoom,		{0} },
	{ ClkWinTitle,		0,		Button2,	killclient,	{0} },
//>>>	{ ClkWinTitle,		0,		Button3,	view,		{0} },
	{ ClkWinTitle,		0,		Button3,	nview,		{0} },
	{ ClkWinTitle,		0,		Button5,	focusstack,	{.i = +1} },
	{ ClkWinTitle,		0,		Button4,	focusstack,	{.i = -1} },

	{ ClkClientWin,		MOD,		Button1,	movemouse,	{0} },
	{ ClkClientWin,		MOD,		Button2,	togglefloating,	{0} },
	{ ClkClientWin,		MOD,		Button3,	resizemouse,	{0} },
	{ ClkClientWin,		MOD|SFT,	Button1,	zoom,		{0} },
	{ ClkClientWin,		MOD|SFT,	Button2,	tag,		{.ui = ~0} },
	{ ClkClientWin,		MOD|SFT,	Button3,	killclient,	{0} },
};

// end of file
