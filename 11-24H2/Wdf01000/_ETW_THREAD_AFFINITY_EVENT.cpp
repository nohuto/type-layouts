struct _ETW_THREAD_AFFINITY_EVENT// Size=0x8 (Id=353)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned short PrimaryGroup;// Offset=0x4 Size=0x2
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char FullSystemAffinity:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SystemAffinityActive:1;// Offset=0x6 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char RundownEvent:1;// Offset=0x6 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ReservedFlags:5;// Offset=0x6 Size=0x1 BitOffset=0x3 BitSize=0x5
        };
        unsigned char AllFlags;// Offset=0x6 Size=0x1
    };
    unsigned char GroupMasksCount;// Offset=0x7 Size=0x1
};
