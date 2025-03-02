#include	"C_EXTERN.H"

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
char	ConfigTxt[MAX_INPUT][100] = {
	"Avancer",
	"Reculer",
	"Tourner à Gauche",
	"Tourner à droite",
	"Utilisation arme",
	"Comportement Menu",
	"Inventaire",
	"Action du Comportement",
	"Dialogue/Fouille",
	"Recentrage caméra",
	"Menus",
	"Holomap",
	"Pause",
	"Esquive",
	"Comportement Normal",
	"Comportement Sportif",
	"Comportement Aggressif",
	"Comportement Discret",
	"Aide en ligne",
	"Sauver",
	"Charger",
	"Options Menu",
	"Tourner la camera",
	"Niveau Caméra suivant",
	"Niveau Caméra Precedent",
	"Arme 1",
	"Arme 2",
	"Arme 3",
	"Arme 4",
	"Arme 5",
	"Arme 6",
	"Arme 7",
	"MécaPingouin",
	"Jetpack On/Off",
	"Sort de Protection",
	"Sort de Foudre",
	} ;

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
#define	KEY_EMPTY	89

char	KeysTxt[90][13] = {
	"...",		//		0
	"ESC",		// K_ESC	1
	"1",		// K_1		2
	"2",		// K_2		3
	"3",		// K_3		4
	"4",		// K_4		5
	"5",		// K_5		6
	"6",		// K_6		7
	"7",		// K_7		8
	"8",		// K_8		9
	"9",		// K_9		10
	"0",		// K_0		11
	")",		// K_PARENTHESE	12
	"=",		// K_EGAL	13
	"BackSpace",	// K_BACKSPACE	14
	"Tab",		// K_TAB	15
	"A",		// K_A		16
	"Z",		// K_Z		17
	"E",		// K_E		18
	"R",		// K_R		19
	"T",		// K_T		20
	"Y",		// K_Y		21
	"U",		// K_U		22
	"I",		// K_I		23
	"O",		// K_O		24
	"P",		// K_P		25
	"^",		// K_CHAPEAU	26
	"$",		// K_DOLLAR	27
	"Entrée",	// K_ENTER	28
	"CTRL",		// K_CTRL	29
	"Q",		// K_Q		30
	"S",		// K_S		31
	"D",		// K_D		32
	"F",		// K_F		33
	"G",		// K_G		34
	"H",		// K_H		35
	"J",		// K_J		36
	"K",		// K_K		37
	"L",		// K_L		38
	"M",		// K_M		39
	"ù",		// K_OU		40
	"²",		// K_CARRE	41
	"Shift Gauche",	// K_SHIFT_LEFT	42
	"*",		// K_MUL	43
	"W",		// K_W		44
	"X",		// K_X		45
	"C",		// K_C		46
	"V",		// K_V		47
	"B",		// K_B		48
	"N",		// K_N		49
	",",		// K_VIRGULE	50
	";",		// K_PT_VIRGULE	51
	":",		// K_2_PTS	52
	"!",		// K_EXC	53
	"Shift Droite",	// K_SHIFT_RIGHT 54
	"* (NumPad)",	// K_MUL_PAD	55
	"ALT",		// K_ALT	56
	"Espace",	// K_SPACE	57
	"Caps Lock",	// K_CAPS_LCK	58
	"F1",		// K_F1		59
	"F2",		// K_F2		60
	"F3",		// K_F3		61
	"F4",		// K_F4		62
	"F5",		// K_F5		63
	"F6",		// K_F6		64
	"F7",		// K_F7		65
	"F8",		// K_F8		66
	"F9",		// K_F9		67
	"F10",		// K_F10	68
	"Verr Num",	// K_NUMLOCK	69
	"Scroll Lock",	// K_SCROLL_LCK	70
	"Début",	// K_HOME	71
	"Haut",		// K_UP		72
	"PageUp",	// K_PAGE_UP	73
	"-",		// K_MOINS	74
	"Gauche",	// K_LEFT	75
	"Centre",	// K_CENTER	76
	"Droite",	// K_RIGHT	77
	"+",		// K_PLUS	78
	"Fin",		// K_END	79
	"Bas",		// K_DOWN       80
	"PageDown",	// K_PAGE_DOWN	81
	"Insert",	// K_INSER	82
	"Suppr",	// K_SUPPR	83
	"",		//		84
	"",		//		85
	"<",		// K_INF	86
	"F11",		// K_F11	87
	"F12",		// K_F12	88
	"",		// EMPTY	89
	} ;

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
#define	STATUS_MENU	0
#define STATUS_PRESS	1
#define STATUS_ERROR	2
#define STATUS_NOTHING	3

char	StatusTxt[][100] = {
	"<ESC> quit, <ENTER> Choose Key",
	"Press a key or <ESC> to quit ...",
	"Error: Key already defined",
	"",
	} ;

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
S32	SelectConfig = 0 ;
S32	SelectKey    = 0 ;

#define	CFG_X0	10
#define	CFG_Y0	10
#define	CFG_X1	630
#define	CFG_Y1	(CFG_Y0+MAX_INPUT*10+35)

#define	ACTION_X	(CFG_X0+20)
#define	KEY1_X		(CFG_X0+390)
#define	KEY2_X		(CFG_X0+520)

#define	CFG_TXT_X0	10
#define	CFG_TXT_Y0	(CFG_Y1+10)
#define	CFG_TXT_X1	630
#define	CFG_TXT_Y1	(CFG_TXT_Y0+10+10)

#define	COUL_TXT	(12*16+10)
#define	COUL_CADRE	(2*16+12)
#define	COUL_STATUS	(2*16+13)
#define	COUL_ERROR	(4*16+13)
#define	COUL_CONFIG	(4*16+15)
#define	COUL_KEY	(4*16+10)

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
void	DrawOneConfig( S32 n )
{
	S32 	y = CFG_Y0+30+n*10 ;
	U8	coul ;

	if( n==SelectConfig )
	{
		coul = 195 ;
		CoulText( COUL_CONFIG, -1 ) ;
	}
	else
	{
		coul = 0 ;
		CoulText( COUL_TXT, -1 ) ;
	}

	Box( CFG_X0+5, y-2, KEY1_X-15, y+8, coul ) ;
	BoxStaticAdd( CFG_X0+5, y-2, KEY1_X-15, y+8 ) ;
	GraphPrintf( FALSE, ACTION_X, y, ConfigTxt[n] ) ;

	if( n==SelectConfig )
	{
		if( SelectKey==0 )
		{
			coul = 200 ;
			CoulText( COUL_KEY, -1 ) ;
		}
		else	coul = 195 ;
	}
	else	coul = 0 ;

	Box( KEY1_X-5, y-2, KEY2_X-15, y+8, coul ) ;

	if( coul==200 )
	{
		Rect( KEY1_X-5, y-2, KEY2_X-15, y+8, 255 ) ;
	}

	BoxStaticAdd( KEY1_X-5, y-2, KEY2_X-15, y+8 ) ;
	GraphPrintf( FALSE, KEY1_X, y, KeysTxt[DefKeys[n].Key1] ) ;

	if( n==SelectConfig )
	{
		if( SelectKey==1 )
		{
			coul = 200 ;
			CoulText( COUL_KEY, -1 ) ;
		}
		else
		{
			coul = 195 ;
			CoulText( COUL_CONFIG, -1 ) ;
		}
	}
	else	coul = 0 ;

	Box( KEY2_X-5, y-2, CFG_X1-5, y+8, coul ) ;

	if( coul==200 )
	{
		Rect( KEY2_X-5, y-2, CFG_X1-5, y+8, 255 ) ;
	}

	BoxStaticAdd( KEY2_X-5, y-2, CFG_X1-5, y+8 ) ;
	GraphPrintf( FALSE, KEY2_X, y, KeysTxt[DefKeys[n].Key2] ) ;
}

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
void	DrawStatusConfig( S32 num )
{
	char *txt = StatusTxt[num] ;

	Box( CFG_TXT_X0, CFG_TXT_Y0, CFG_TXT_X1, CFG_TXT_Y1, 0 ) ;
	Rect( CFG_TXT_X0, CFG_TXT_Y0, CFG_TXT_X1, CFG_TXT_Y1, COUL_CADRE ) ;
	BoxStaticAdd( CFG_TXT_X0, CFG_TXT_Y0, CFG_TXT_X1, CFG_TXT_Y1 ) ;

	if( num==STATUS_ERROR )
	{
		CoulText( COUL_ERROR, -1 ) ;
	}
	else
	{
		CoulText( COUL_STATUS, -1 ) ;
	}

	GraphPrintf( FALSE, 320-(strlen(txt)*SizeChar)/2, CFG_TXT_Y0+7, txt ) ;
}

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
void	DrawScreenConfig( void )
{
	S32	n ;

	Box( CFG_X0, CFG_Y0, CFG_X1, CFG_Y1, 0 ) ;
	Rect( CFG_X0, CFG_Y0, CFG_X1, CFG_Y0+20, COUL_CADRE ) ;
	Rect( CFG_X0, CFG_Y0+20+2, CFG_X1, CFG_Y1, COUL_CADRE ) ;

	Line( KEY1_X-10, CFG_Y0, KEY1_X-10, CFG_Y0+20, COUL_CADRE ) ;
	Line( KEY2_X-10, CFG_Y0, KEY2_X-10, CFG_Y0+20, COUL_CADRE ) ;

	Line( KEY1_X-10, CFG_Y0+20+2, KEY1_X-10, CFG_Y1, COUL_CADRE ) ;
	Line( KEY2_X-10, CFG_Y0+20+2, KEY2_X-10, CFG_Y1, COUL_CADRE ) ;

	CoulText( COUL_CADRE, -1 ) ;

	GraphPrintf( FALSE, ACTION_X, CFG_Y0+7, "Action" ) ;
	GraphPrintf( FALSE, KEY1_X, CFG_Y0+7, "Touche 1" ) ;
	GraphPrintf( FALSE, KEY2_X, CFG_Y0+7, "Touche 2" ) ;

	DrawStatusConfig( STATUS_MENU ) ;

	for( n=0; n<MAX_INPUT; n++ )
	{
		DrawOneConfig( n ) ;
	}
}

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
S32	CheckKeyConfig( S32 key )
{
	S32	n ;

	for( n=0; n<MAX_INPUT; n++ )
	{
		if( DefKeys[n].Key1==key
		OR  DefKeys[n].Key2==key )
		{
			return n ;
		}
	}

	return FALSE ;
}

//▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
void	MenuConfig( void )
{
	S32	oldselect ;
	S32	memoascii = AsciiMode ;
	S32	akey = 0 ;

	AsciiMode = TRUE ;

	FadeToPal( PtrPalNormal ) ;

	DrawScreenConfig() ;
	DrawOneConfig( SelectConfig ) ;

	WaitNoInput() ;

	oldselect = SelectConfig 	;

	while( akey!=A_ESC )
	{
		akey = GetAscii() ;

		if( akey==A_UP )
		{
			SelectConfig-- ;
			if( SelectConfig<0 )	SelectConfig = MAX_INPUT-1 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_DOWN )
		{
			SelectConfig++ ;
			if( SelectConfig>=MAX_INPUT )	SelectConfig = 0 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_PGUP )
		{
			SelectConfig-=10 ;
			if( SelectConfig<0 )	SelectConfig = 0 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_PGDN )
		{
			SelectConfig+=10 ;
			if( SelectConfig>=MAX_INPUT )	SelectConfig = MAX_INPUT-1 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_HOME )
		{
			SelectConfig = 0 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_END )
		{
			SelectConfig = MAX_INPUT-1 ;

			DrawOneConfig( oldselect ) ;
			DrawOneConfig( SelectConfig ) ;

			oldselect = SelectConfig ;
		}

		if( akey==A_LEFT
		OR  akey==A_RIGHT )
		{
			SelectKey ^= 1 ;

			DrawOneConfig( SelectConfig ) ;
		}

		if( akey==A_SUPPR
		OR  akey==A_BACKSPACE )
		{
			if( SelectKey==0 )
				DefKeys[SelectConfig].Key1 = 0 ;
			else	DefKeys[SelectConfig].Key2 = 0 ;

			DrawOneConfig( SelectConfig ) ;
		}

		if( akey==A_RETURN )
		{
			S32	memokey ;
			U32	*ptr ;

			// define new key
			if( SelectKey==0 )
			{
				ptr = &DefKeys[SelectConfig].Key1 ;
			}
			else
			{
				ptr = &DefKeys[SelectConfig].Key2 ;
			}

			memokey = *ptr ;

			WaitNoInput() ;

			while( !MyKey )
			{
				MyGetInput() ;

				if( (TimerRefHR&0xFF) < 127 )	// aff 2/3 eff 1/3
				{
					DrawStatusConfig( STATUS_NOTHING ) ;
					*ptr = KEY_EMPTY ;
				}
				else
				{
					DrawStatusConfig( STATUS_PRESS ) ;
					*ptr = 0 ;
				}

				DrawOneConfig( SelectConfig ) ;

				BoxUpdate() ;
			}

			if( MyKey==K_ESC )
			{
				MyKey = memokey ;
				DrawStatusConfig( STATUS_MENU ) ;
			}
			else
			{
				if( CheckKeyConfig(MyKey) )
				{
					Beep() ;
					MyKey = memokey ;
					DrawStatusConfig( STATUS_ERROR ) ;
				}
				else
				{
					DrawStatusConfig( STATUS_MENU ) ;
				}
			}

			*ptr = MyKey ;

			DrawOneConfig( SelectConfig ) ;

			WaitNoInput() ;
			while( GetAscii() ) ;
		}

		BoxUpdate() ;
	}

	WaitNoInput() ;
	while( GetAscii() ) ;
	AsciiMode = memoascii ;
}
