union _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>// Size=0x30 (Id=3119)
{
    union // Size=0x30 (Id=0)
    {
        struct <unnamed-type-Write>// Size=0x18 (Id=17721)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
        struct <unnamed-type-Read>// Size=0x18 (Id=17726)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
        struct <unnamed-type-Ioctl>// Size=0x30 (Id=17731)
        {
            unsigned long IoControlCode;// Offset=0x0 Size=0x4
            struct <unnamed-type-Input>// Size=0x10 (Id=17733)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Offset;// Offset=0x8 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Input> Input;// Offset=0x8 Size=0x10
            struct <unnamed-type-Output>// Size=0x18 (Id=17737)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Offset;// Offset=0x8 Size=0x8
                unsigned long long Length;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Output> Output;// Offset=0x18 Size=0x18
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Ioctl> Ioctl;// Offset=0x0 Size=0x30
        struct <unnamed-type-Others>// Size=0x20 (Id=17743)
        {
            union <unnamed-type-Argument1>// Size=0x8 (Id=17744)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument1> Argument1;// Offset=0x0 Size=0x8
            union <unnamed-type-Argument2>// Size=0x8 (Id=17748)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument2> Argument2;// Offset=0x8 Size=0x8
            union <unnamed-type-Argument3>// Size=0x8 (Id=17752)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument3> Argument3;// Offset=0x10 Size=0x8
            union <unnamed-type-Argument4>// Size=0x8 (Id=17756)
            {
                void * Ptr;// Offset=0x0 Size=0x8
                unsigned long long Value;// Offset=0x0 Size=0x8
            };
            union _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument4> Argument4;// Offset=0x18 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
        struct <unnamed-type-Usb>// Size=0x8 (Id=17761)
        {
            struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0 * Completion;// Offset=0x0 Size=0x8
        };
        struct _WDF_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-Usb> Usb;// Offset=0x0 Size=0x8
    };
};
