struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _ETW_DECODE_CONTROL_ENTRY// Size=0x30 (Id=777)
{
    struct _ETW_DECODE_CONTROL_ENTRY * Next;// Offset=0x0 Size=0x8
    struct _GUID Decode;// Offset=0x8 Size=0x10
    struct _GUID Control;// Offset=0x18 Size=0x10
    unsigned char ConsumersNotified;// Offset=0x28 Size=0x1
};
