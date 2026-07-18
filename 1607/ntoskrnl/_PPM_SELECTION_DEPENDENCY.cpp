struct _PPM_SELECTION_MENU// Size=0x10 (Id=865)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU_ENTRY * Entries;// Offset=0x8 Size=0x8
};

struct _PPM_SELECTION_DEPENDENCY// Size=0x18 (Id=1257)
{
    unsigned long Processor;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU Menu;// Offset=0x8 Size=0x10
};
