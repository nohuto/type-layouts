enum _SSH_HUB_STATE
{
    SSH_State_HubActive=1,
    SSH_State_HubPendingSuspend=2,
    SSH_State_HubPendingResumeAfterSuspend=3,
    SSH_State_HubSuspended=4,
    SSH_State_HubPendingResume=5,
    SSH_State_HubFailedResume=6
};
