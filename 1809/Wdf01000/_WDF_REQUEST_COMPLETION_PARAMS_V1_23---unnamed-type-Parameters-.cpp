union _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>// Size=0x30 (Id=4748)
{
    union // Size=0x30 (Id=0)
    {
        struct <unnamed-type-Write>// Size=0x18 (Id=23800)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
        struct <unnamed-type-Read>// Size=0x18 (Id=23805)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
        struct <unnamed-type-Ioctl>// Size=0x30 (Id=23810)
        {
            unsigned long IoControlCode;// Offset=0x0 Size=0x4
            struct <unnamed-type-Input>// Size=0x10 (Id=23812)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Offset;// Offset=0x8 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Input> Input;// Offset=0x8 Size=0x10
            struct <unnamed-type-Output>// Size=0x18 (Id=23816)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Offset;// Offset=0x8 Size=0x8
                unsigned long long Length;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Output> Output;// Offset=0x18 Size=0x18
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Ioctl> Ioctl;// Offset=0x0 Size=0x30
        struct <unnamed-type-Others>// Size=0x20 (Id=23822)
        {
            union <unnamed-type-Argument1>// Size=0x8 (Id=23823)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument1> Argument1;// Offset=0x0 Size=0x8
            union <unnamed-type-Argument2>// Size=0x8 (Id=23827)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument2> Argument2;// Offset=0x8 Size=0x8
            union <unnamed-type-Argument3>// Size=0x8 (Id=23831)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument3> Argument3;// Offset=0x10 Size=0x8
            union <unnamed-type-Argument4>// Size=0x8 (Id=23835)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument4> Argument4;// Offset=0x18 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
        struct <unnamed-type-Usb>// Size=0x8 (Id=23840)
        {
            struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_23 * Completion;// Offset=0x0 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_23::<unnamed-type-Parameters>::<unnamed-type-Usb> Usb;// Offset=0x0 Size=0x8
    };
};
