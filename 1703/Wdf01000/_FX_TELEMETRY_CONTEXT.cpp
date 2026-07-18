struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _FX_TELEMETRY_CONTEXT// Size=0x14 (Id=1278)
{
    struct _GUID DriverSessionGUID;// Offset=0x0 Size=0x10
    long DoOnceFlagsBitmap;// Offset=0x10 Size=0x4
    void _FX_TELEMETRY_CONTEXT(struct _FX_TELEMETRY_CONTEXT * );
    void _FX_TELEMETRY_CONTEXT(struct _FX_TELEMETRY_CONTEXT & );
    struct _FX_TELEMETRY_CONTEXT & operator=(struct _FX_TELEMETRY_CONTEXT * );
    struct _FX_TELEMETRY_CONTEXT & operator=(struct _FX_TELEMETRY_CONTEXT & );
};
