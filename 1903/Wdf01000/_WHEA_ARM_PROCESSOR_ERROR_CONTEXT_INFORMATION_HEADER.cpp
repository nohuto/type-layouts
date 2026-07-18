struct _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER// Size=0x9 (Id=3499)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short RegisterContextType;// Offset=0x2 Size=0x2
    unsigned long RegisterArraySize;// Offset=0x4 Size=0x4
    unsigned char RegisterArray[1];// Offset=0x8 Size=0x1
};
