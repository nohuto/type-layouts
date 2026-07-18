struct _WDF_REQUEST_COMPLETION_PARAMS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Ioctl>// Size=0x30 (Id=2702)
{
    union // Size=0x18 (Id=0)
    {
        unsigned long IoControlCode;// Offset=0x0 Size=0x4
        struct <unnamed-type-Input>// Size=0x10 (Id=18641)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Offset;// Offset=0x8 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Input> Input;// Offset=0x8 Size=0x10
        struct <unnamed-type-Output>// Size=0x18 (Id=18645)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Offset;// Offset=0x8 Size=0x8
            unsigned long long Length;// Offset=0x10 Size=0x8
        };
    };
    struct _WDF_REQUEST_COMPLETION_PARAMS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Output> Output;// Offset=0x18 Size=0x18
};
