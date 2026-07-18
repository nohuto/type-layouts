struct _PPM_SELECTION_MENU// Size=0x8 (Id=694)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU_ENTRY * Entries;// Offset=0x4 Size=0x4
};

struct _PPM_SELECTION_DEPENDENCY// Size=0xc (Id=753)
{
    unsigned long Processor;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU Menu;// Offset=0x4 Size=0x8
};
