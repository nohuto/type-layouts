struct _KAFFINITY_EX// Size=0x108 (Id=119)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _KSOFTWARE_INTERRUPT_BATCH// Size=0x210 (Id=1412)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char TargetType;// Offset=0x1 Size=0x1
    unsigned char ReservedBatchInProgress;// Offset=0x2 Size=0x1
    unsigned char Spare;// Offset=0x3 Size=0x1
    unsigned long SingleTargetIndex;// Offset=0x4 Size=0x4
    struct _KAFFINITY_EX MultipleTargetAffinity;// Offset=0x8 Size=0x108
    unsigned long long Padding[32];// Offset=0x110 Size=0x100
};
