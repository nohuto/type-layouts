struct __vc_attributes::moduleAttribute// Size=0x60 (Id=1709)
{
    enum type_e
    {
        dll=1,
        exe=2,
        service=3,
        unspecified=4,
        EXE=2,
        SERVICE=3
    };
    void moduleAttribute(enum __vc_attributes::moduleAttribute::type_e ,char * ,char * ,char * ,int ,bool ,char * ,int ,char * ,char * ,int ,bool ,bool ,char * ,char * );
    void moduleAttribute(enum __vc_attributes::moduleAttribute::type_e );
    void moduleAttribute();
    enum __vc_attributes::moduleAttribute::type_e type;// Offset=0x0 Size=0x4
    char * name;// Offset=0x8 Size=0x8
    char * version;// Offset=0x10 Size=0x8
    char * uuid;// Offset=0x18 Size=0x8
    int lcid;// Offset=0x20 Size=0x4
    bool control;// Offset=0x24 Size=0x1
    char * helpstring;// Offset=0x28 Size=0x8
    int helpstringcontext;// Offset=0x30 Size=0x4
    char * helpstringdll;// Offset=0x38 Size=0x8
    char * helpfile;// Offset=0x40 Size=0x8
    int helpcontext;// Offset=0x48 Size=0x4
    bool hidden;// Offset=0x4c Size=0x1
    bool restricted;// Offset=0x4d Size=0x1
    char * custom;// Offset=0x50 Size=0x8
    char * resource_name;// Offset=0x58 Size=0x8
};
