struct _PROCESSOR_RECORD// Size=0x1ac (Id=3531)
{
    unsigned long Index;// Offset=0x0 Size=0x4
    unsigned long FeatureSet;// Offset=0x4 Size=0x4
    unsigned long ProcessorSpeed;// Offset=0x8 Size=0x4
    wchar_t ProcessorName[64];// Offset=0xc Size=0x80
    wchar_t ProcessorIdentifier[128];// Offset=0x8c Size=0x100
    wchar_t VendorIdentifier[16];// Offset=0x18c Size=0x20
};
