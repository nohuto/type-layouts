union _USB_FUNCTION_SUSPEND_OPTIONS// Size=0x1 (Id=2562)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char PowerState:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char RemoteWakeEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
};
