struct _UNICODE_STRING// Size=0x10 (Id=111)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OB_CALLBACK_REGISTRATION// Size=0x28 (Id=2726)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short OperationRegistrationCount;// Offset=0x2 Size=0x2
    struct _UNICODE_STRING Altitude;// Offset=0x8 Size=0x10
    void * RegistrationContext;// Offset=0x18 Size=0x8
    struct _OB_OPERATION_REGISTRATION * OperationRegistration;// Offset=0x20 Size=0x8
};
