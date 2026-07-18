struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WMI_TXR// Size=0x28 (Id=2064)
{
    long long InitialTime;// Offset=0x0 Size=0x8
    struct _GUID TxRGUID;// Offset=0x8 Size=0x10
    unsigned long Status;// Offset=0x18 Size=0x4
    unsigned long UowCount;// Offset=0x1c Size=0x4
    wchar_t Hive[1];// Offset=0x20 Size=0x2
};
