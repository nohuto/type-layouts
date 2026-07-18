union _CONFIG_VALIDATION_FLAGS// Size=0x4 (Id=488)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirstInterfaceFound:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FirstEndpointFound:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExpectingEndpointCompanion:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ExpectingSSPEndpointCompanion:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long EndpointCompanionFound:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SSPEndpointCompanionFound:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
};
