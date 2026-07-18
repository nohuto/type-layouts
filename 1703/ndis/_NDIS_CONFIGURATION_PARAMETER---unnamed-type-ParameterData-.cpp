struct _UNICODE_STRING// Size=0x10 (Id=183)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _NDIS_CONFIGURATION_PARAMETER::<unnamed-type-ParameterData>// Size=0x10 (Id=1366)
{
    unsigned long IntegerData;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING StringData;// Offset=0x0 Size=0x10
    struct BINARY_DATA BinaryData;// Offset=0x0 Size=0x10
};
