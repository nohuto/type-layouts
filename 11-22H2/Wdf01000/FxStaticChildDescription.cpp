struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER// Size=0x4 (Id=2067)
{
    unsigned long IdentificationDescriptionSize;// Offset=0x0 Size=0x4
};

struct FxStaticChildDescription// Size=0x10 (Id=699)
{
    struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER Header;// Offset=0x0 Size=0x4
    class FxDevice * Pdo;// Offset=0x8 Size=0x8
};
