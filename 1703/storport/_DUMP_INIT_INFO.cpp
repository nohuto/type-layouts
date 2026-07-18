struct _DUMP_INIT_INFO// Size=0x10 (Id=356)
{
    unsigned char Crash;// Offset=0x0 Size=0x1
    unsigned char LockMemoryPages;// Offset=0x1 Size=0x1
    unsigned char HiberResume;// Offset=0x2 Size=0x1
    unsigned long Progress;// Offset=0x4 Size=0x4
    void  ( * StallRoutine)(unsigned long );// Offset=0x8 Size=0x8
};
