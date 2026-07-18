enum _NDIS_PARAMETER_TYPE
{
    NdisParameterInteger=0,
    NdisParameterHexInteger=1,
    NdisParameterString=2,
    NdisParameterMultiString=3,
    NdisParameterBinary=4
};

struct _UNICODE_STRING// Size=0x10 (Id=187)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_CONFIGURATION_PARAMETER// Size=0x18 (Id=1039)
{
    union // Size=0x4 (Id=0)
    {
        enum _NDIS_PARAMETER_TYPE ParameterType;// Offset=0x0 Size=0x4
        union <unnamed-type-ParameterData>// Size=0x10 (Id=6069)
        {
            unsigned long IntegerData;// Offset=0x0 Size=0x4
            struct _UNICODE_STRING StringData;// Offset=0x0 Size=0x10
            struct BINARY_DATA BinaryData;// Offset=0x0 Size=0x10
        };
    };
    union _NDIS_CONFIGURATION_PARAMETER::<unnamed-type-ParameterData> ParameterData;// Offset=0x8 Size=0x10
};
