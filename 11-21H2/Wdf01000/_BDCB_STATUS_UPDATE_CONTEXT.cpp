enum _BDCB_STATUS_UPDATE_TYPE
{
    BdCbStatusPrepareForDependencyLoad=0,
    BdCbStatusPrepareForDriverLoad=1,
    BdCbStatusPrepareForUnload=2
};

struct _BDCB_STATUS_UPDATE_CONTEXT// Size=0x4 (Id=829)
{
    enum _BDCB_STATUS_UPDATE_TYPE StatusType;// Offset=0x0 Size=0x4
};
