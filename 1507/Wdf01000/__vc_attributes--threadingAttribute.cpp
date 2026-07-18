struct __vc_attributes::threadingAttribute// Size=0x4 (Id=214)
{
    enum threading_e
    {
        apartment=1,
        single=2,
        free=3,
        neutral=4,
        both=5
    };
    void threadingAttribute(enum __vc_attributes::threadingAttribute::threading_e );
    void threadingAttribute();
    enum __vc_attributes::threadingAttribute::threading_e value;// Offset=0x0 Size=0x4
};
