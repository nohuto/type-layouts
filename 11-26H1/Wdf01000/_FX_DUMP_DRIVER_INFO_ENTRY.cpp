struct _WDF_VERSION// Size=0xc (Id=2391)
{
    unsigned long Major;// Offset=0x0 Size=0x4
    unsigned long Minor;// Offset=0x4 Size=0x4
    unsigned long Build;// Offset=0x8 Size=0x4
};

struct _FX_DUMP_DRIVER_INFO_ENTRY// Size=0x38 (Id=955)
{
    struct _FX_DRIVER_GLOBALS * FxDriverGlobals;// Offset=0x0 Size=0x8
    struct _WDF_VERSION Version;// Offset=0x8 Size=0xc
    char DriverName[32];// Offset=0x14 Size=0x20
};
