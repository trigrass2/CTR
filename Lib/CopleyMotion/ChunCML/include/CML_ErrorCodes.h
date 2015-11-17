/********************************************************/
/*                                                      */
/*  Copley Motion Libraries                             */
/*                                                      */
/*  Copyright (c) 2002 Copley Controls Corp.            */
/*                     http://www.copleycontrols.com    */
/*                                                      */
/********************************************************/

#ifndef _DEF_INC_CML_ERRORCODES
#define _DEF_INC_CML_ERRORCODES

#define CMLERR_Error_OK                        0
#define CMLERR_Error_Unknown                   1
#define CMLERR_AmpError_NodeState              2
#define CMLERR_AmpError_pvtSegPos              3
#define CMLERR_AmpError_pvtSegVel              4
#define CMLERR_AmpError_pvtBufferFull          5
#define CMLERR_AmpError_badDeviceID            6
#define CMLERR_AmpError_badHomeParam           7
#define CMLERR_AmpError_badMoveParam           8
#define CMLERR_AmpError_InMotion               9
#define CMLERR_AmpError_GuardError             10
#define CMLERR_AmpError_Fault                  11
#define CMLERR_AmpError_ShortCircuit           12
#define CMLERR_AmpError_AmpTemp                13
#define CMLERR_AmpError_MotorTemp              14
#define CMLERR_AmpError_OverVolt               15
#define CMLERR_AmpError_UnderVolt              16
#define CMLERR_AmpError_EncoderPower           17
#define CMLERR_AmpError_PhaseErr               18
#define CMLERR_AmpError_TrackErr               19
#define CMLERR_AmpError_PosLim                 20
#define CMLERR_AmpError_NegLim                 21
#define CMLERR_AmpError_PosSoftLim             22
#define CMLERR_AmpError_NegSoftLim             23
#define CMLERR_AmpError_TrackWarn              24
#define CMLERR_AmpError_Unknown                25
#define CMLERR_AmpError_Reset                  26
#define CMLERR_AmpError_Disabled               27
#define CMLERR_AmpError_QuickStopMode          28
#define CMLERR_AmpError_NoUserUnits            29
#define CMLERR_AmpError_Abort                  30
#define CMLERR_AmpError_pvtPosUnavail          31
#define CMLERR_AmpFault_Memory                 32
#define CMLERR_AmpFault_ADC                    33
#define CMLERR_AmpFault_ShortCircuit           34
#define CMLERR_AmpFault_AmpTemp                35
#define CMLERR_AmpFault_MotorTemp              36
#define CMLERR_AmpFault_OverVolt               37
#define CMLERR_AmpFault_UnderVolt              38
#define CMLERR_AmpFault_EncoderPower           39
#define CMLERR_AmpFault_PhaseErr               40
#define CMLERR_AmpFault_TrackErr               41
#define CMLERR_AmpFault_Unknown                42
#define CMLERR_CanError_BadPortName            43
#define CMLERR_CanError_NotOpen                44
#define CMLERR_CanError_AlreadyOpen            45
#define CMLERR_CanError_BadParam               46
#define CMLERR_CanError_Driver                 47
#define CMLERR_CanError_BadBaud                48
#define CMLERR_CanError_Timeout                49
#define CMLERR_CanError_Overflow               50
#define CMLERR_CanError_BusOff                 51
#define CMLERR_CanError_InvalidID              52
#define CMLERR_CanError_Unknown                53
#define CMLERR_CanError_NoDriver               54
#define CMLERR_CanError_Alloc                  55
#define CMLERR_CanOpenError_ThreadStart        56
#define CMLERR_CanOpenError_BadParam           57
#define CMLERR_CanOpenError_SDO_Busy           58
#define CMLERR_CanOpenError_SDO_Timeout        59
#define CMLERR_CanOpenError_SDO_Unknown        60
#define CMLERR_CanOpenError_SDO_BadMuxRcvd     61
#define CMLERR_CanOpenError_SDO_BadMsgRcvd     62
#define CMLERR_CanOpenError_BadNodeID          63
#define CMLERR_CanOpenError_NotInitialized     64
#define CMLERR_CanOpenError_Initialized        65
#define CMLERR_CanOpenError_NotSupported       66
#define CMLERR_CanOpenError_MonitorRunning     67
#define CMLERR_CanOpenError_IllegalFieldCt     68
#define CMLERR_CanOpenError_RcvrNotFound       69
#define CMLERR_CanOpenError_RcvrPresent        70
#define CMLERR_CanOpenError_Closed             71
#define CMLERR_NodeError_GuardTimeout          72
#define CMLERR_SDO_Error_NoAbortCode           73
#define CMLERR_SDO_Error_Togglebit             74
#define CMLERR_SDO_Error_Timeout               75
#define CMLERR_SDO_Error_Bad_scs               76
#define CMLERR_SDO_Error_Block_size            77
#define CMLERR_SDO_Error_Block_seq             78
#define CMLERR_SDO_Error_Block_crc             79
#define CMLERR_SDO_Error_Memory                80
#define CMLERR_SDO_Error_Access                81
#define CMLERR_SDO_Error_Writeonly             82
#define CMLERR_SDO_Error_Readonly              83
#define CMLERR_SDO_Error_Bad_object            84
#define CMLERR_SDO_Error_Pdo_map               85
#define CMLERR_SDO_Error_Pdo_length            86
#define CMLERR_SDO_Error_Bad_param             87
#define CMLERR_SDO_Error_Incompatible          88
#define CMLERR_SDO_Error_Hardware              89
#define CMLERR_SDO_Error_Bad_length            90
#define CMLERR_SDO_Error_Too_long              91
#define CMLERR_SDO_Error_Too_short             92
#define CMLERR_SDO_Error_Subindex              93
#define CMLERR_SDO_Error_Param_range           94
#define CMLERR_SDO_Error_Param_high            95
#define CMLERR_SDO_Error_Param_low             96
#define CMLERR_SDO_Error_Min_max               97
#define CMLERR_SDO_Error_General               98
#define CMLERR_SDO_Error_Transfer              99
#define CMLERR_SDO_Error_Transfer_Local        100
#define CMLERR_SDO_Error_Transfer_State        101
#define CMLERR_SDO_Error_OD_Gen_Fail           102
#define CMLERR_SDO_Error_Unknown               103
#define CMLERR_IOError_BadID                   104
#define CMLERR_IOError_BadIOCount              105
#define CMLERR_PDO_Error_MapFull               106
#define CMLERR_PDO_Error_BitOverflow           107
#define CMLERR_PDO_Error_BitSizeError          108
#define CMLERR_LinkError_BadAmpCount           109
#define CMLERR_LinkError_NetworkMismatch       110
#define CMLERR_LinkError_AlreadyInit           111
#define CMLERR_LinkError_AmpAlreadyLinked      112
#define CMLERR_LinkError_AxisCount             113
#define CMLERR_LinkError_AmpTrjOverflow        114
#define CMLERR_LinkError_AmpTrjInUse           115
#define CMLERR_LinkError_AmpTrjNotRunning      116
#define CMLERR_LinkError_NoActiveTrj           117
#define CMLERR_LinkError_BadMoveLimit          118
#define CMLERR_LinkError_UnknownAmpErr         119
#define CMLERR_LinkError_StartMoveTO           120
#define CMLERR_LinkError_NotSupported          121
#define CMLERR_ThreadError_Start               122
#define CMLERR_ThreadError_Running             123
#define CMLERR_ThreadError_Timeout             124
#define CMLERR_ThreadError_General             125
#define CMLERR_ThreadError_BadParam            126
#define CMLERR_ThreadError_Alloc               127
#define CMLERR_EventError_AlreadyOwned         128
#define CMLERR_EventError_NotMapped            129
#define CMLERR_AmpFileError_format             130
#define CMLERR_AmpFileError_tooOld             131
#define CMLERR_AmpFileError_noFileAccess       132
#define CMLERR_AmpFileError_fileOpen           133
#define CMLERR_AmpFileError_range              134
#define CMLERR_ScurveError_BadParam            135
#define CMLERR_ScurveError_NoCalc              136
#define CMLERR_ScurveError_InUse               137
#define CMLERR_ScurveError_NotInUse            138
#define CMLERR_CanError_Permission             139
#define CMLERR_FirmwareError_open              140
#define CMLERR_FirmwareError_read              141
#define CMLERR_FirmwareError_format            142
#define CMLERR_FirmwareError_crc               143
#define CMLERR_FirmwareError_alloc             144
#define CMLERR_PathError_BadVel                145
#define CMLERR_PathError_BadAcc                146
#define CMLERR_PathError_VelNotInit            147
#define CMLERR_PathError_AccNotInit            148
#define CMLERR_PathError_BadPoint              149
#define CMLERR_PathError_Alloc                 150
#define CMLERR_PathError_BadLength             151
#define CMLERR_PathError_Empty                 152
#define CMLERR_AmpFileError_axis               153
#define CMLERR_AmpFault_I2TLimit               154
#define CMLERR_AmpError_VelWin                 155
#define CMLERR_CopleyNodeError_SerialMsgLen    156
#define CMLERR_CopleyNodeError_SerialError     157
#define CMLERR_TrjError_NoneAvailable          158
#define CMLERR_AmpError_PhaseInit              159
#define CMLERR_AmpError_NotHoming              160
#define CMLERR_AmpError_HomingError            161
#define CMLERR_IOFileError_bankInvalid         162

// New error codes added for version 2.0, not in 1.x
#define CMLERR_NetworkError_NodeIdUsed         400
#define CMLERR_EtherCatError_ThreadStart       401
#define CMLERR_EtherCatError_OpenHardware      402
#define CMLERR_EtherCatError_EcatNotInit       403
#define CMLERR_EtherCatError_ReadHardware      404
#define CMLERR_EtherCatError_WriteHardware     405
#define CMLERR_EtherCatError_NoResponse        406
#define CMLERR_EtherCatError_NodeNotFound      407
#define CMLERR_EtherCatError_NodeBootMode      408
#define CMLERR_EtherCatError_NodeStateChange   409
#define CMLERR_Error_Internal                  410
#define CMLERR_SDO_Error_NoBlkXfers            411
#define CMLERR_FirmwareError_notSupported      412
#define CMLERR_EtherCatError_EcatMsgCorrupt    413
#define CMLERR_NodeError_NetworkUnavailable    414
#define CMLERR_EtherCatError_DatagramWontFit   415
#define CMLERR_EtherCatError_MboxError         416
#define CMLERR_EtherCatError_MboxSyntax        417
#define CMLERR_EtherCatError_MboxProtocol      418
#define CMLERR_EtherCatError_MboxChannel       419
#define CMLERR_EtherCatError_MboxService       420
#define CMLERR_EtherCatError_MboxHeader        421
#define CMLERR_EtherCatError_MboxTooShort      422
#define CMLERR_EtherCatError_MboxMemory        423
#define CMLERR_EtherCatError_MboxSize          424
#define CMLERR_EtherCatError_FoEformat         425
#define CMLERR_EtherCatError_FoEerror          426
#define CMLERR_EtherCatError_NodeNotInit       427
#define CMLERR_EtherCatError_PdoNotEnabled     428
#define CMLERR_SDO_Error_ObjMapActive          429
#define CMLERR_EtherCatError_NetworkWiringError  430

#endif


