struct _ACPI_METHOD_ARGUMENT_V1// Size=0x8 (Id=1838)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short DataLength;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        unsigned long Argument;// Offset=0x4 Size=0x4
        unsigned char Data[1];// Offset=0x4 Size=0x1
    };
};
