struct _PERFINFO_INTERRUPT_INFORMATION// Size=0x14 (Id=3523)
{
    unsigned long long InitialTime;// Offset=0x0 Size=0x8
    void * ServiceRoutine;// Offset=0x8 Size=0x8
    unsigned char ReturnValue;// Offset=0x10 Size=0x1
    unsigned short Vector;// Offset=0x11 Size=0x2
    unsigned char Reserved;// Offset=0x13 Size=0x1
};
