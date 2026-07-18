union _unnamed_518// Size=0x1 (Id=518)
{
    unsigned char AllFlags;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char NextWaitActive:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char NextTimeoutActive:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char CallbackCounted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Spare:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};
