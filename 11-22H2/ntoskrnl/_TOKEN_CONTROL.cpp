struct _LUID// Size=0x8 (Id=94)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _TOKEN_SOURCE// Size=0x10 (Id=1490)
{
    char SourceName[8];// Offset=0x0 Size=0x8
    struct _LUID SourceIdentifier;// Offset=0x8 Size=0x8
};

struct _TOKEN_CONTROL// Size=0x28 (Id=1886)
{
    struct _LUID TokenId;// Offset=0x0 Size=0x8
    struct _LUID AuthenticationId;// Offset=0x8 Size=0x8
    struct _LUID ModifiedId;// Offset=0x10 Size=0x8
    struct _TOKEN_SOURCE TokenSource;// Offset=0x18 Size=0x10
};
