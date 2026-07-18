struct _PROCESSOR_DEVICE_EXTENSION// Size=0x28 (Id=505)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    char * CompatibleID;// Offset=0x18 Size=0x8
    unsigned long InitialApicId;// Offset=0x20 Size=0x4
    unsigned long ProcessorId;// Offset=0x24 Size=0x4
};
