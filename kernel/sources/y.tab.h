typedef union
{
	float	value;		/* allgemeine Zahl */	
        char    *name;          /* allgemeiner String */
	struct
	{
		int	v;
		int	r;
	}	version;	/* Versionsnummer #.# */
} YYSTYPE;
#define	L_BRACKET	257
#define	R_BRACKET	258
#define	VERSION_HEADER	259
#define	GENERATED_AT	260
#define	NO_OF_PATTERN	261
#define	NO_OF_INPUT	262
#define	NO_OF_OUTPUT	263
#define	NO_OF_VAR_IDIM	264
#define	NO_OF_VAR_ODIM	265
#define	MAXIMUM_IDIM	266
#define	MAXIMUM_ODIM	267
#define	NO_OF_CLASSES	268
#define	CLASS_REDISTRIB	269
#define	REMAPFUNCTION	270
#define	REMAP_PARAM	271
#define	ERROR	272
#define	PATTERNEND	273
#define	PATTERNNOCLASS	274
#define	NUMBER	275
#define	NAME	276
#define	V_NUMBER	277


extern YYSTYPE pplval;
