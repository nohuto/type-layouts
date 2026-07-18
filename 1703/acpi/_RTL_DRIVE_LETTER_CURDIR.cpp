struct _STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_DRIVE_LETTER_CURDIR// Size=0x18 (Id=605)
{
    unsigned short Flags;// Offset=0x0 Size=0x2
    unsigned short Length;// Offset=0x2 Size=0x2
    unsigned long TimeStamp;// Offset=0x4 Size=0x4
    struct _STRING DosPath;// Offset=0x8 Size=0x10
};
