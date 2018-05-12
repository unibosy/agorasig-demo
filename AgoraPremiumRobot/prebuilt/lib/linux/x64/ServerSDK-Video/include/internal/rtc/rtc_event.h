//
//  Agora Media SDK
//
//  Created by Sting Feng in 2015-05.
//  Copyright (c) 2015 Agora IO. All rights reserved.
//
#pragma once


namespace agora { namespace rtc {

enum class RTC_EVENT
{
	NATIVE_LOG = 100,
	ERROR_EVENT = 101,
	WARNING_EVENT = 102,
    MEDIA_ENGINE_LOAD_SUCCESS = 1002,
    MEDIA_ENGINE_START_CAMERA_SUCCESS = 1005,
    MEDIA_ENGINE_START_CALL_SUCCESS = 1006,
	VIDEO_STOPPED = 1007,
	TRANSPORT_QUALITY = 1101,
	AUDIO_QUALITY = 1102,
	TRANSPORT_SERVER_INSTANCE = 1103,
	MEDIA_ENGINE_EVENT = 1104,
	AUDIO_DEVICE_STATE_CHANGED = 1105,
	API_CALL_EXECUTED = 1106,
	VIDEO_DEVICE_STATE_CHANGED = 1107,
    REQUEST_CHANNEL_KEY = 1108,
    CLIENT_ROLE_CHANGED = 1109,

    OPEN_CHANNEL_SUCCESS = 13001,
    LEAVE_CHANNEL = 13006,
	NETWORK_QUALITY = 13007,
	USER_OFFLINE = 13008,
	RTC_STATS = 13010,
	USER_JOINED = 13013,
	USER_MUTE_AUDIO = 13014,
	USER_MUTE_VIDEO = 13015,
	USER_ENABLE_VIDEO = 13016,
    LASTMILE_QUALITY = 13017,
    AUDIO_EFFECT_FINISHED = 13018,
    USER_ENABLE_LOCAL_VIDEO = 13019,


	RECAP_INDICATION = 14000,
	AUDIO_VOLUME_INDICATION = 14001,
	FIRST_REMOTE_VIDEO_FRAME = 14002,
	LOCAL_VIDEO_STAT = 14003,
	REMOTE_VIDEO_STAT = 14004,
	FIRST_LOCAL_VIDEO_FRAME = 14005,
	FIRST_REMOTE_VIDEO_DECODED = 14007,
	CONNECTION_LOST = 14008,
	STREAM_MESSAGE = 14009,
	CONNECTION_INTERRUPTED = 14010,
	QUERY_RECORDING_SERVICE_STATUS = 14011,
    STREAM_MESSAGE_ERROR = 14012,
    VIDEO_SIZE_CHANGED = 14013,
    FIRST_LOCAL_AUDIO_FRAME = 14014,
    FIRST_REMOTE_AUDIO_FRAME = 14015,
    ACTIVE_SPEAKER = 14016,
    AUDIO_DEVICE_VOLUME_CHANGED = 14017,
#ifdef INTERNAL_ENGINE_STATUS
    _INTERNAL_ENGINE_STATUS = 14018,
#endif
    CONNECTION_BANNED = 14019,
};

}}
