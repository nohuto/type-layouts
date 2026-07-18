struct __vc_attributes::event_sourceAttribute// Size=0xc (Id=1579)
{
    enum type_e
    {
        native=0,
        com=1,
        managed=2
    };
    enum optimize_e
    {
        speed=0,
        size=1
    };
    void event_sourceAttribute(enum __vc_attributes::event_sourceAttribute::type_e );
    void event_sourceAttribute();
    enum __vc_attributes::event_sourceAttribute::type_e type;// Offset=0x0 Size=0x4
    enum __vc_attributes::event_sourceAttribute::optimize_e optimize;// Offset=0x4 Size=0x4
    bool decorate;// Offset=0x8 Size=0x1
};
