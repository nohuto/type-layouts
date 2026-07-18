struct _WDF_USB_CONTINUOUS_READER_CONFIG// Size=0x48 (Id=542)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long long TransferLength;// Offset=0x8 Size=0x8
    unsigned long long HeaderLength;// Offset=0x10 Size=0x8
    unsigned long long TrailerLength;// Offset=0x18 Size=0x8
    unsigned char NumPendingReads;// Offset=0x20 Size=0x1
    struct _WDF_OBJECT_ATTRIBUTES * BufferAttributes;// Offset=0x28 Size=0x8
    void  ( * EvtUsbTargetPipeReadComplete)(struct WDFUSBPIPE__ * ,struct WDFMEMORY__ * ,unsigned long long ,void * );// Offset=0x30 Size=0x8
    void * EvtUsbTargetPipeReadCompleteContext;// Offset=0x38 Size=0x8
    unsigned char  ( * EvtUsbTargetPipeReadersFailed)(struct WDFUSBPIPE__ * ,long ,long );// Offset=0x40 Size=0x8
};
