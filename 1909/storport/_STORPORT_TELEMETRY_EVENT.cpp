struct _STORPORT_TELEMETRY_EVENT// Size=0x180 (Id=181)
{
    unsigned long DriverVersion;// Offset=0x0 Size=0x4
    unsigned long EventId;// Offset=0x4 Size=0x4
    unsigned char EventName[32];// Offset=0x8 Size=0x20
    unsigned long EventVersion;// Offset=0x28 Size=0x4
    unsigned long Flags;// Offset=0x2c Size=0x4
    unsigned long EventBufferLength;// Offset=0x30 Size=0x4
    unsigned char * EventBuffer;// Offset=0x38 Size=0x8
    unsigned char ParameterName0[32];// Offset=0x40 Size=0x20
    unsigned long long ParameterValue0;// Offset=0x60 Size=0x8
    unsigned char ParameterName1[32];// Offset=0x68 Size=0x20
    unsigned long long ParameterValue1;// Offset=0x88 Size=0x8
    unsigned char ParameterName2[32];// Offset=0x90 Size=0x20
    unsigned long long ParameterValue2;// Offset=0xb0 Size=0x8
    unsigned char ParameterName3[32];// Offset=0xb8 Size=0x20
    unsigned long long ParameterValue3;// Offset=0xd8 Size=0x8
    unsigned char ParameterName4[32];// Offset=0xe0 Size=0x20
    unsigned long long ParameterValue4;// Offset=0x100 Size=0x8
    unsigned char ParameterName5[32];// Offset=0x108 Size=0x20
    unsigned long long ParameterValue5;// Offset=0x128 Size=0x8
    unsigned char ParameterName6[32];// Offset=0x130 Size=0x20
    unsigned long long ParameterValue6;// Offset=0x150 Size=0x8
    unsigned char ParameterName7[32];// Offset=0x158 Size=0x20
    unsigned long long ParameterValue7;// Offset=0x178 Size=0x8
};
