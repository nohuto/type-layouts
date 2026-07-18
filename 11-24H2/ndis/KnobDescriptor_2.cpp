struct KnobDescriptor// Size=0x30 (Id=588)
{
    wchar_t * Name;// Offset=0x0 Size=0x8
    void * Value;// Offset=0x8 Size=0x8
    unsigned long long DefaultValue;// Offset=0x10 Size=0x8
    enum ConfigKnobFlag Flags;// Offset=0x18 Size=0x4
    unsigned long long MinimumValue;// Offset=0x20 Size=0x8
    unsigned long long MaximumValue;// Offset=0x28 Size=0x8
    unsigned long long GetCurrentValue();
    void SetCurrentValue(unsigned long long );
};
