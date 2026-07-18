struct _PHYSICAL_MEMORY_RUN// Size=0x10 (Id=976)
{
    unsigned long long BasePage;// Offset=0x0 Size=0x8
    unsigned long long PageCount;// Offset=0x8 Size=0x8
};

struct _PHYSICAL_MEMORY_DESCRIPTOR// Size=0x20 (Id=695)
{
    unsigned long NumberOfRuns;// Offset=0x0 Size=0x4
    unsigned long long NumberOfPages;// Offset=0x8 Size=0x8
    struct _PHYSICAL_MEMORY_RUN Run[1];// Offset=0x10 Size=0x10
};
