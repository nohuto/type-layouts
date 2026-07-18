enum _CommandResetStates
{
    CommandResetState_Uninitialized=0,
    CommandResetState_NotInProgress=1,
    CommandResetState_Pending=2,
    CommandResetState_InProgress=3,
    CommandResetState_PostReset=4,
    CommandResetState_Failed=5
};
