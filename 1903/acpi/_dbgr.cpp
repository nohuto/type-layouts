struct _brkpt// Size=0x10 (Id=486)
{
    unsigned long dwfBrkPt;// Offset=0x0 Size=0x4
    unsigned char * pbBrkPt;// Offset=0x8 Size=0x8
};

struct _evhandle// Size=0x10 (Id=359)
{
    long  ( * pfnHandler)(<btNoType> );// Offset=0x0 Size=0x8
    unsigned long long uipParam;// Offset=0x8 Size=0x8
};

struct _dbgr// Size=0x210 (Id=248)
{
    long dwfDebugger;// Offset=0x0 Size=0x4
    int iPrintLevel;// Offset=0x4 Size=0x4
    unsigned long long uipDumpDataAddr;// Offset=0x8 Size=0x8
    unsigned char * pbUnAsm;// Offset=0x10 Size=0x8
    unsigned char * pbUnAsmEnd;// Offset=0x18 Size=0x8
    unsigned char * pbBlkBegin;// Offset=0x20 Size=0x8
    unsigned char * pbBlkEnd;// Offset=0x28 Size=0x8
    struct _objsym * posSymbolList;// Offset=0x30 Size=0x8
    struct _brkpt BrkPts[10];// Offset=0x38 Size=0xa0
    unsigned long dwLogSize;// Offset=0xd8 Size=0x4
    unsigned long dwLogIndex;// Offset=0xdc Size=0x4
    struct _eventlog * pEventLog;// Offset=0xe0 Size=0x8
    struct _evhandle hConMessage;// Offset=0xe8 Size=0x10
    struct _evhandle hConPrompt;// Offset=0xf8 Size=0x10
    long rcLastError;// Offset=0x108 Size=0x4
    char szLastError[256];// Offset=0x10c Size=0x100
};
