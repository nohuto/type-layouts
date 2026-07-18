struct _HUGE_PFN_NUMBER// Size=0x8 (Id=661)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            union // Size=0x8 (Id=0)
            {
                unsigned long long BasePage:22;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x16
                unsigned long long PageCount:22;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x16
            };
        };
        unsigned long long EntireValue;// Offset=0x0 Size=0x8
    };
};
