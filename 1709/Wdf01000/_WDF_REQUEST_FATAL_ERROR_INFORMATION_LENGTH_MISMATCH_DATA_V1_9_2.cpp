struct _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA_V1_9// Size=0x28 (Id=3592)
{
    struct WDFREQUEST__ * Request;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long OutputBufferLength;// Offset=0x10 Size=0x4
    unsigned long long Information;// Offset=0x18 Size=0x8
    unsigned char MajorFunction;// Offset=0x20 Size=0x1
};
