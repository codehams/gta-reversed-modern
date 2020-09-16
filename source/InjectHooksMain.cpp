#include "StdInc.h"
#include "CAEAudioUtility.h"
#include "CAEDataStream.h"
#include "CAEMFDecoder.h"
#include "CAEVorbisDecoder.h"
#include "CAEWaveDecoder.h"
#include "CAEWMADecoder.h"
#include "CAEStreamingDecoder.h"
#include "CAEUserRadioTrackManager.h"
#include "CDebugMenu.h"

void InjectHooksMain(void)
{
    InjectCommonHooks();
    CGame::InjectHooks();
    CPad::InjectHooks();
    CRunningScript::InjectHooks();
    CStreaming::InjectHooks();
    InjectCdStreamHooks();
    CVehicleModelInfo::InjectHooks();
    CFileLoader::InjectHooks();
    CFileMgr::InjectHooks();
    CEntity::InjectHooks();;
    CPhysical::InjectHooks();
    CRenderer::InjectHooks();
    CVisibilityPlugins::InjectHooks();
    CPed::InjectHooks();
    CPedIntelligence::InjectHooks();
    CTrain::InjectHooks();
    CColSphere::InjectHooks();
    CAnimBlendAssociation::InjectHooks();
    CEvent::InjectHooks();
    CEventRevived::InjectHooks();
    CEventHandlerHistory::InjectHooks();
    CEventEditableResponse::InjectHooks();
    CEventDamage::InjectHooks();
    CEventAttractor::InjectHooks();
    CEventScriptedAttractor::InjectHooks();
    CEventGunShot::InjectHooks();
    CEventGunShotWhizzedBy::InjectHooks();
    CEventGunAimedAt::InjectHooks();
    CEventDeath::InjectHooks();
    CEventDeadPed::InjectHooks();
    CEventDraggedOutCar::InjectHooks();
    CEventGotKnockedOverByCar::InjectHooks();
    CEventKnockOffBike::InjectHooks();
    CEventScriptCommand::InjectHooks();
    CEventSoundQuiet::InjectHooks();
    CEventGroupEvent::InjectHooks();
    CEventPedToChase::InjectHooks();
    CEventPedToFlee::InjectHooks();
    CEventPotentialWalkIntoVehicle::InjectHooks();
    CEventPotentialWalkIntoObject::InjectHooks();
    CEventPotentialWalkIntoFire::InjectHooks();
    CEventPotentialWalkIntoPed::InjectHooks();
    CEventPedCollisionWithPed::InjectHooks();
    CEventPedCollisionWithPlayer::InjectHooks();
    CEventPlayerCollisionWithPed::InjectHooks();
    CEventObjectCollision::InjectHooks();
    CEventBuildingCollision::InjectHooks();
    CEventVehicleToSteal::InjectHooks();
    CEventVehicleDamage::InjectHooks();
    CEventVehicleDamageWeapon::InjectHooks();
    CEventVehicleDied::InjectHooks();
    CEventVehicleOnFire::InjectHooks();
    CEventVehicleHitAndRun::InjectHooks();
    CEventVehicleCollision::InjectHooks();
    CEventVehicleDamageCollision::InjectHooks();
    CEventHitByWaterCannon::InjectHooks();
    CEventInWater::InjectHooks();
    CEventCreatePartnerTask::InjectHooks();
    CEventInAir::InjectHooks();
    CEventStuckInAir::InjectHooks();
    CEventAcquaintancePed::InjectHooks();
    CEventLeaderEnteredCarAsDriver::InjectHooks();
    CEventLeaderExitedCarAsDriver::InjectHooks();
    CEventLeaderQuitEnteringCarAsDriver::InjectHooks();
    CEventAreaCodes::InjectHooks();
    CEventLeaderEntryExit::InjectHooks();
    CEventSpecial::InjectHooks();
    CEventFireNearby::InjectHooks();
    CEventGroup::InjectHooks();
    CEventGlobalGroup::InjectHooks();
    CPedDamageResponseCalculator::InjectHooks();
    CPedScriptedTaskRecord::InjectHooks();
    CPedScriptedTaskRecordData::InjectHooks();
    CScriptedBrainTaskStore::InjectHooks();
    CTaskManager::InjectHooks();
    CTaskComplexUseSequence::InjectHooks();
    CTaskComplexSequence::InjectHooks();
    CTaskComplexWander::InjectHooks();
    CTaskComplexWanderCop::InjectHooks();
    CTaskComplexPartner::InjectHooks();
    CTaskComplexPartnerChat::InjectHooks();
    CTaskComplexPartnerDeal::InjectHooks();
    CTaskComplexPartnerGreet::InjectHooks();
    CTaskComplexPartnerShove::InjectHooks();
    CTaskSimplePlayerOnFoot::InjectHooks();
    CTaskSimpleSwim::InjectHooks();
    CTaskSimpleGoTo::InjectHooks();
    CTaskSimpleGoToPoint::InjectHooks();
    CTaskSimpleGoToPointFine::InjectHooks();
    CTaskSimpleStandStill::InjectHooks();
    CTaskComplexGoToPointAndStandStill::InjectHooks();
    CTaskComplexGoToPointAndStandStillTimed::InjectHooks();
    CTaskComplexAvoidOtherPedWhileWandering::InjectHooks();
    CTaskComplexWalkRoundObject::InjectHooks();
    CTaskComplexFollowPedFootsteps::InjectHooks();
    CTaskComplexKillPedOnFoot::InjectHooks();
    CTaskComplexArrestPed::InjectHooks();
    CTaskSimplePause::InjectHooks();
    CTaskSimpleHoldEntity::InjectHooks();
    CTaskSimplePutDownEntity::InjectHooks();
    CTaskSimplePickUpEntity::InjectHooks();
    CTaskSimpleStealthKill::InjectHooks();
    cBuoyancy::InjectHooks();
    CWanted::InjectHooks();
    CWeapon::InjectHooks();
    CVehicle::InjectHooks();
    CPlayerPed::InjectHooks();
    CStats::InjectHooks();
    CCarCtrl::InjectHooks();
    CTheZones::InjectHooks();
    CMenuManager::InjectHooks();
    CSprite2d::InjectHooks();
    CCheat::InjectHooks();

    CAEAudioUtility::InjectHooks();
    CAEDataStream::InjectHooks();
    CAEStreamingDecoder::InjectHooks();
    CAEMFDecoder::InjectHooks();
    CAEUserRadioTrackManager::InjectHooks();
    CAEVorbisDecoder::InjectHooks();
    CAEWaveDecoder::InjectHooks();
    CAEWMADecoder::InjectHooks();
}
