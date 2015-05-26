/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */
#ifndef GNOME_Speech_H
#define GNOME_Speech_H 1
#include <glib.h>
#define ORBIT_IDL_SERIAL 20
#include <orbit/orbit-types.h>
#ifdef __cplusplus
extern "C" {
#endif				/* __cplusplus */
   /** typedefs **/
#include <bonobo-activation/Bonobo_Unknown.h>
#if !defined(_GNOME_Speech_speech_callback_type_defined)
#define _GNOME_Speech_speech_callback_type_defined 1
   typedef enum {
      GNOME_Speech_speech_callback_speech_started,
      GNOME_Speech_speech_callback_speech_progress,
      GNOME_Speech_speech_callback_speech_ended
   } GNOME_Speech_speech_callback_type;
#if !defined(TC_IMPL_TC_GNOME_Speech_speech_callback_type_0)
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_0 'G'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_1 'N'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_2 'O'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_3 'M'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_4 'E'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_5 '_'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_6 'S'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_7 'p'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_8 'e'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_9 'e'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_10 'c'
#define TC_IMPL_TC_GNOME_Speech_speech_callback_type_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_speech_callback_type_struct;
#define TC_GNOME_Speech_speech_callback_type ((CORBA_TypeCode)&TC_GNOME_Speech_speech_callback_type_struct)
#endif
#endif
#if !defined(ORBIT_DECL_GNOME_Speech_SpeechCallback) && !defined(_GNOME_Speech_SpeechCallback_defined)
#define ORBIT_DECL_GNOME_Speech_SpeechCallback 1
#define _GNOME_Speech_SpeechCallback_defined 1
#define GNOME_Speech_SpeechCallback__freekids CORBA_Object__freekids
   typedef CORBA_Object GNOME_Speech_SpeechCallback;
   extern CORBA_unsigned_long GNOME_Speech_SpeechCallback__classid;
#if !defined(TC_IMPL_TC_GNOME_Speech_SpeechCallback_0)
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_0 'G'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_1 'N'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_2 'O'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_3 'M'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_4 'E'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_5 '_'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_6 'S'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_7 'p'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_8 'e'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_9 'e'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_10 'c'
#define TC_IMPL_TC_GNOME_Speech_SpeechCallback_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_SpeechCallback_struct;
#define TC_GNOME_Speech_SpeechCallback ((CORBA_TypeCode)&TC_GNOME_Speech_SpeechCallback_struct)
#endif
#endif
#if !defined(_GNOME_Speech_Parameter_defined)
#define _GNOME_Speech_Parameter_defined 1
   typedef struct GNOME_Speech_Parameter_type GNOME_Speech_Parameter;
   struct GNOME_Speech_Parameter_type {
      CORBA_string name;
      CORBA_double min;
      CORBA_double current;
      CORBA_double max;
      CORBA_boolean enumerated;
   };
#if !defined(TC_IMPL_TC_GNOME_Speech_Parameter_0)
#define TC_IMPL_TC_GNOME_Speech_Parameter_0 'G'
#define TC_IMPL_TC_GNOME_Speech_Parameter_1 'N'
#define TC_IMPL_TC_GNOME_Speech_Parameter_2 'O'
#define TC_IMPL_TC_GNOME_Speech_Parameter_3 'M'
#define TC_IMPL_TC_GNOME_Speech_Parameter_4 'E'
#define TC_IMPL_TC_GNOME_Speech_Parameter_5 '_'
#define TC_IMPL_TC_GNOME_Speech_Parameter_6 'S'
#define TC_IMPL_TC_GNOME_Speech_Parameter_7 'p'
#define TC_IMPL_TC_GNOME_Speech_Parameter_8 'e'
#define TC_IMPL_TC_GNOME_Speech_Parameter_9 'e'
#define TC_IMPL_TC_GNOME_Speech_Parameter_10 'c'
#define TC_IMPL_TC_GNOME_Speech_Parameter_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_Parameter_struct;
#define TC_GNOME_Speech_Parameter ((CORBA_TypeCode)&TC_GNOME_Speech_Parameter_struct)
#endif
#define GNOME_Speech_Parameter__alloc() ((GNOME_Speech_Parameter *)ORBit_small_alloc (TC_GNOME_Speech_Parameter))
#define GNOME_Speech_Parameter__freekids(m,d) ORBit_small_freekids (TC_GNOME_Speech_Parameter,(m),(d))
#endif
#if !defined(ORBIT_DECL_CORBA_sequence_GNOME_Speech_Parameter)
#define ORBIT_DECL_CORBA_sequence_GNOME_Speech_Parameter 1
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_0 'G'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_1 'N'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_2 'O'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_3 'M'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_4 'E'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_5 '_'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_6 'S'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_7 'p'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_8 'e'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_9 'e'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_10 'c'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_Parameter_11 'h'
#if !defined(_CORBA_sequence_GNOME_Speech_Parameter_defined)
#define _CORBA_sequence_GNOME_Speech_Parameter_defined 1
   typedef struct {
      CORBA_unsigned_long _maximum,
       _length;
      GNOME_Speech_Parameter *_buffer;
      CORBA_boolean _release;
   } CORBA_sequence_GNOME_Speech_Parameter;
#endif
#if !defined(TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_0)
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_0 'G'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_1 'N'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_2 'O'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_3 'M'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_4 'E'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_5 '_'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_6 'S'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_7 'p'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_8 'e'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_9 'e'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_10 'c'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_Parameter_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_CORBA_sequence_GNOME_Speech_Parameter_struct;
#define TC_CORBA_sequence_GNOME_Speech_Parameter ((CORBA_TypeCode)&TC_CORBA_sequence_GNOME_Speech_Parameter_struct)
#endif
#define CORBA_sequence_GNOME_Speech_Parameter__alloc() ((CORBA_sequence_GNOME_Speech_Parameter *)ORBit_small_alloc (TC_CORBA_sequence_GNOME_Speech_Parameter))
#define CORBA_sequence_GNOME_Speech_Parameter__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_GNOME_Speech_Parameter,(m),(d))
#define CORBA_sequence_GNOME_Speech_Parameter_allocbuf(l) ((GNOME_Speech_Parameter*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_Parameter, (l)))
#define CORBA_sequence_GNOME_Speech_Parameter_allocbuf(l) ((GNOME_Speech_Parameter*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_Parameter, (l)))
#endif
#if !defined(_GNOME_Speech_ParameterList_defined)
#define _GNOME_Speech_ParameterList_defined 1
   typedef CORBA_sequence_GNOME_Speech_Parameter GNOME_Speech_ParameterList;
#define GNOME_Speech_ParameterList_marshal(x,y,z) CORBA_sequence_GNOME_Speech_Parameter_marshal((x),(y),(z))
#define GNOME_Speech_ParameterList_demarshal(x,y,z,i) CORBA_sequence_GNOME_Speech_Parameter_demarshal((x),(y),(z),(i))
#if !defined(TC_IMPL_TC_GNOME_Speech_ParameterList_0)
#define TC_IMPL_TC_GNOME_Speech_ParameterList_0 'G'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_1 'N'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_2 'O'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_3 'M'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_4 'E'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_5 '_'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_6 'S'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_7 'p'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_8 'e'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_9 'e'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_10 'c'
#define TC_IMPL_TC_GNOME_Speech_ParameterList_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_ParameterList_struct;
#define TC_GNOME_Speech_ParameterList ((CORBA_TypeCode)&TC_GNOME_Speech_ParameterList_struct)
#endif
#define GNOME_Speech_ParameterList__alloc() ((GNOME_Speech_ParameterList *)ORBit_small_alloc (TC_CORBA_sequence_GNOME_Speech_Parameter))
#define GNOME_Speech_ParameterList__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_GNOME_Speech_Parameter,(m),(d))
#define GNOME_Speech_ParameterList_allocbuf(l) ((GNOME_Speech_Parameter*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_Parameter, (l)))
#endif
#if !defined(ORBIT_DECL_GNOME_Speech_Speaker) && !defined(_GNOME_Speech_Speaker_defined)
#define ORBIT_DECL_GNOME_Speech_Speaker 1
#define _GNOME_Speech_Speaker_defined 1
#define GNOME_Speech_Speaker__freekids CORBA_Object__freekids
   typedef CORBA_Object GNOME_Speech_Speaker;
   extern CORBA_unsigned_long GNOME_Speech_Speaker__classid;
#if !defined(TC_IMPL_TC_GNOME_Speech_Speaker_0)
#define TC_IMPL_TC_GNOME_Speech_Speaker_0 'G'
#define TC_IMPL_TC_GNOME_Speech_Speaker_1 'N'
#define TC_IMPL_TC_GNOME_Speech_Speaker_2 'O'
#define TC_IMPL_TC_GNOME_Speech_Speaker_3 'M'
#define TC_IMPL_TC_GNOME_Speech_Speaker_4 'E'
#define TC_IMPL_TC_GNOME_Speech_Speaker_5 '_'
#define TC_IMPL_TC_GNOME_Speech_Speaker_6 'S'
#define TC_IMPL_TC_GNOME_Speech_Speaker_7 'p'
#define TC_IMPL_TC_GNOME_Speech_Speaker_8 'e'
#define TC_IMPL_TC_GNOME_Speech_Speaker_9 'e'
#define TC_IMPL_TC_GNOME_Speech_Speaker_10 'c'
#define TC_IMPL_TC_GNOME_Speech_Speaker_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_Speaker_struct;
#define TC_GNOME_Speech_Speaker ((CORBA_TypeCode)&TC_GNOME_Speech_Speaker_struct)
#endif
#endif
#if !defined(_GNOME_Speech_voice_gender_defined)
#define _GNOME_Speech_voice_gender_defined 1
   typedef enum {
      GNOME_Speech_gender_male,
      GNOME_Speech_gender_female
   } GNOME_Speech_voice_gender;
#if !defined(TC_IMPL_TC_GNOME_Speech_voice_gender_0)
#define TC_IMPL_TC_GNOME_Speech_voice_gender_0 'G'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_1 'N'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_2 'O'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_3 'M'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_4 'E'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_5 '_'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_6 'S'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_7 'p'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_8 'e'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_9 'e'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_10 'c'
#define TC_IMPL_TC_GNOME_Speech_voice_gender_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_voice_gender_struct;
#define TC_GNOME_Speech_voice_gender ((CORBA_TypeCode)&TC_GNOME_Speech_voice_gender_struct)
#endif
#endif
#if !defined(_GNOME_Speech_VoiceInfo_defined)
#define _GNOME_Speech_VoiceInfo_defined 1
   typedef struct GNOME_Speech_VoiceInfo_type GNOME_Speech_VoiceInfo;
   struct GNOME_Speech_VoiceInfo_type {
      CORBA_string name;
      CORBA_string language;
      GNOME_Speech_voice_gender gender;
   };
#if !defined(TC_IMPL_TC_GNOME_Speech_VoiceInfo_0)
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_0 'G'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_1 'N'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_2 'O'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_3 'M'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_4 'E'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_5 '_'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_6 'S'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_7 'p'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_8 'e'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_9 'e'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_10 'c'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfo_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_VoiceInfo_struct;
#define TC_GNOME_Speech_VoiceInfo ((CORBA_TypeCode)&TC_GNOME_Speech_VoiceInfo_struct)
#endif
#define GNOME_Speech_VoiceInfo__alloc() ((GNOME_Speech_VoiceInfo *)ORBit_small_alloc (TC_GNOME_Speech_VoiceInfo))
#define GNOME_Speech_VoiceInfo__freekids(m,d) ORBit_small_freekids (TC_GNOME_Speech_VoiceInfo,(m),(d))
#endif
#if !defined(ORBIT_DECL_CORBA_sequence_GNOME_Speech_VoiceInfo)
#define ORBIT_DECL_CORBA_sequence_GNOME_Speech_VoiceInfo 1
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_0 'G'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_1 'N'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_2 'O'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_3 'M'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_4 'E'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_5 '_'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_6 'S'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_7 'p'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_8 'e'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_9 'e'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_10 'c'
#define ORBIT_IMPL_CORBA_sequence_GNOME_Speech_VoiceInfo_11 'h'
#if !defined(_CORBA_sequence_GNOME_Speech_VoiceInfo_defined)
#define _CORBA_sequence_GNOME_Speech_VoiceInfo_defined 1
   typedef struct {
      CORBA_unsigned_long _maximum,
       _length;
      GNOME_Speech_VoiceInfo *_buffer;
      CORBA_boolean _release;
   } CORBA_sequence_GNOME_Speech_VoiceInfo;
#endif
#if !defined(TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_0)
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_0 'G'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_1 'N'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_2 'O'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_3 'M'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_4 'E'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_5 '_'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_6 'S'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_7 'p'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_8 'e'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_9 'e'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_10 'c'
#define TC_IMPL_TC_CORBA_sequence_GNOME_Speech_VoiceInfo_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_CORBA_sequence_GNOME_Speech_VoiceInfo_struct;
#define TC_CORBA_sequence_GNOME_Speech_VoiceInfo ((CORBA_TypeCode)&TC_CORBA_sequence_GNOME_Speech_VoiceInfo_struct)
#endif
#define CORBA_sequence_GNOME_Speech_VoiceInfo__alloc() ((CORBA_sequence_GNOME_Speech_VoiceInfo *)ORBit_small_alloc (TC_CORBA_sequence_GNOME_Speech_VoiceInfo))
#define CORBA_sequence_GNOME_Speech_VoiceInfo__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_GNOME_Speech_VoiceInfo,(m),(d))
#define CORBA_sequence_GNOME_Speech_VoiceInfo_allocbuf(l) ((GNOME_Speech_VoiceInfo*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_VoiceInfo, (l)))
#define CORBA_sequence_GNOME_Speech_VoiceInfo_allocbuf(l) ((GNOME_Speech_VoiceInfo*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_VoiceInfo, (l)))
#endif
#if !defined(_GNOME_Speech_VoiceInfoList_defined)
#define _GNOME_Speech_VoiceInfoList_defined 1
   typedef CORBA_sequence_GNOME_Speech_VoiceInfo GNOME_Speech_VoiceInfoList;
#define GNOME_Speech_VoiceInfoList_marshal(x,y,z) CORBA_sequence_GNOME_Speech_VoiceInfo_marshal((x),(y),(z))
#define GNOME_Speech_VoiceInfoList_demarshal(x,y,z,i) CORBA_sequence_GNOME_Speech_VoiceInfo_demarshal((x),(y),(z),(i))
#if !defined(TC_IMPL_TC_GNOME_Speech_VoiceInfoList_0)
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_0 'G'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_1 'N'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_2 'O'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_3 'M'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_4 'E'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_5 '_'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_6 'S'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_7 'p'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_8 'e'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_9 'e'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_10 'c'
#define TC_IMPL_TC_GNOME_Speech_VoiceInfoList_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_VoiceInfoList_struct;
#define TC_GNOME_Speech_VoiceInfoList ((CORBA_TypeCode)&TC_GNOME_Speech_VoiceInfoList_struct)
#endif
#define GNOME_Speech_VoiceInfoList__alloc() ((GNOME_Speech_VoiceInfoList *)ORBit_small_alloc (TC_CORBA_sequence_GNOME_Speech_VoiceInfo))
#define GNOME_Speech_VoiceInfoList__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_GNOME_Speech_VoiceInfo,(m),(d))
#define GNOME_Speech_VoiceInfoList_allocbuf(l) ((GNOME_Speech_VoiceInfo*)ORBit_small_allocbuf (TC_CORBA_sequence_GNOME_Speech_VoiceInfo, (l)))
#endif
#if !defined(ORBIT_DECL_GNOME_Speech_SynthesisDriver) && !defined(_GNOME_Speech_SynthesisDriver_defined)
#define ORBIT_DECL_GNOME_Speech_SynthesisDriver 1
#define _GNOME_Speech_SynthesisDriver_defined 1
#define GNOME_Speech_SynthesisDriver__freekids CORBA_Object__freekids
   typedef CORBA_Object GNOME_Speech_SynthesisDriver;
   extern CORBA_unsigned_long GNOME_Speech_SynthesisDriver__classid;
#if !defined(TC_IMPL_TC_GNOME_Speech_SynthesisDriver_0)
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_0 'G'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_1 'N'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_2 'O'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_3 'M'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_4 'E'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_5 '_'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_6 'S'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_7 'p'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_8 'e'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_9 'e'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_10 'c'
#define TC_IMPL_TC_GNOME_Speech_SynthesisDriver_11 'h'
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   const struct CORBA_TypeCode_struct TC_GNOME_Speech_SynthesisDriver_struct;
#define TC_GNOME_Speech_SynthesisDriver ((CORBA_TypeCode)&TC_GNOME_Speech_SynthesisDriver_struct)
#endif
#endif
   /** POA structures **/
#ifndef _defined_POA_GNOME_Speech_SpeechCallback
#define _defined_POA_GNOME_Speech_SpeechCallback 1
   typedef struct {
      void *_private;
      void (*notify) (PortableServer_Servant _servant, const GNOME_Speech_speech_callback_type type, const CORBA_long text_id, const CORBA_long offset, CORBA_Environment * ev);
   } POA_GNOME_Speech_SpeechCallback__epv;
   typedef struct {
      PortableServer_ServantBase__epv *_base_epv;
      POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
      POA_GNOME_Speech_SpeechCallback__epv *GNOME_Speech_SpeechCallback_epv;
   } POA_GNOME_Speech_SpeechCallback__vepv;
   typedef struct {
      void *_private;
      POA_GNOME_Speech_SpeechCallback__vepv *vepv;
   } POA_GNOME_Speech_SpeechCallback;
   extern void POA_GNOME_Speech_SpeechCallback__init(PortableServer_Servant servant, CORBA_Environment * ev);
   extern void POA_GNOME_Speech_SpeechCallback__fini(PortableServer_Servant servant, CORBA_Environment * ev);
#endif				/* _defined_POA_GNOME_Speech_SpeechCallback */
#ifndef _defined_POA_GNOME_Speech_Speaker
#define _defined_POA_GNOME_Speech_Speaker 1
   typedef struct {
      void *_private;
      GNOME_Speech_ParameterList *(*getSupportedParameters) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_string(*getParameterValueDescription) (PortableServer_Servant _servant, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev);
       CORBA_double(*getParameterValue) (PortableServer_Servant _servant, const CORBA_char * name, CORBA_Environment * ev);
       CORBA_boolean(*setParameterValue) (PortableServer_Servant _servant, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev);
       CORBA_long(*say) (PortableServer_Servant _servant, const CORBA_char * text, CORBA_Environment * ev);
       CORBA_boolean(*stop) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_boolean(*isSpeaking) (PortableServer_Servant _servant, CORBA_Environment * ev);
      void (*wait) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_boolean(*registerSpeechCallback) (PortableServer_Servant _servant, const GNOME_Speech_SpeechCallback callback, CORBA_Environment * ev);
   } POA_GNOME_Speech_Speaker__epv;
   typedef struct {
      PortableServer_ServantBase__epv *_base_epv;
      POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
      POA_GNOME_Speech_Speaker__epv *GNOME_Speech_Speaker_epv;
   } POA_GNOME_Speech_Speaker__vepv;
   typedef struct {
      void *_private;
      POA_GNOME_Speech_Speaker__vepv *vepv;
   } POA_GNOME_Speech_Speaker;
   extern void POA_GNOME_Speech_Speaker__init(PortableServer_Servant servant, CORBA_Environment * ev);
   extern void POA_GNOME_Speech_Speaker__fini(PortableServer_Servant servant, CORBA_Environment * ev);
#endif				/* _defined_POA_GNOME_Speech_Speaker */
#ifndef _defined_POA_GNOME_Speech_SynthesisDriver
#define _defined_POA_GNOME_Speech_SynthesisDriver 1
   typedef struct {
      void *_private;
       CORBA_string(*_get_driverName) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_string(*_get_synthesizerName) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_string(*_get_driverVersion) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_string(*_get_synthesizerVersion) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_boolean(*driverInit) (PortableServer_Servant _servant, CORBA_Environment * ev);
       CORBA_boolean(*isInitialized) (PortableServer_Servant _servant, CORBA_Environment * ev);
      GNOME_Speech_VoiceInfoList *(*getVoices) (PortableServer_Servant _servant, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev);
      GNOME_Speech_VoiceInfoList *(*getAllVoices) (PortableServer_Servant _servant, CORBA_Environment * ev);
       GNOME_Speech_Speaker(*createSpeaker) (PortableServer_Servant _servant, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev);
   } POA_GNOME_Speech_SynthesisDriver__epv;
   typedef struct {
      PortableServer_ServantBase__epv *_base_epv;
      POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
      POA_GNOME_Speech_SynthesisDriver__epv *GNOME_Speech_SynthesisDriver_epv;
   } POA_GNOME_Speech_SynthesisDriver__vepv;
   typedef struct {
      void *_private;
      POA_GNOME_Speech_SynthesisDriver__vepv *vepv;
   } POA_GNOME_Speech_SynthesisDriver;
   extern void POA_GNOME_Speech_SynthesisDriver__init(PortableServer_Servant servant, CORBA_Environment * ev);
   extern void POA_GNOME_Speech_SynthesisDriver__fini(PortableServer_Servant servant, CORBA_Environment * ev);
#endif				/* _defined_POA_GNOME_Speech_SynthesisDriver */
   /** skel prototypes **/
   void _ORBIT_skel_small_GNOME_Speech_SpeechCallback_notify(POA_GNOME_Speech_SpeechCallback * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, void (*_impl_notify) (PortableServer_Servant _servant, const GNOME_Speech_speech_callback_type type, const CORBA_long text_id, const CORBA_long offset, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_getSupportedParameters(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, GNOME_Speech_ParameterList * (*_impl_getSupportedParameters) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_getParameterValueDescription(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_string(*_impl_getParameterValueDescription) (PortableServer_Servant _servant, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_getParameterValue(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_double(*_impl_getParameterValue) (PortableServer_Servant _servant, const CORBA_char * name, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_setParameterValue(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_setParameterValue) (PortableServer_Servant _servant, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_say(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_long(*_impl_say) (PortableServer_Servant _servant, const CORBA_char * text, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_stop(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_stop) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_isSpeaking(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_isSpeaking) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_wait(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, void (*_impl_wait) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_Speaker_registerSpeechCallback(POA_GNOME_Speech_Speaker * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_registerSpeechCallback) (PortableServer_Servant _servant, const GNOME_Speech_SpeechCallback callback, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver__get_driverName(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_string(*_impl__get_driverName) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver__get_synthesizerName(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_string(*_impl__get_synthesizerName) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver__get_driverVersion(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_string(*_impl__get_driverVersion) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver__get_synthesizerVersion(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_string(*_impl__get_synthesizerVersion) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver_driverInit(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_driverInit) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver_isInitialized(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, CORBA_boolean(*_impl_isInitialized) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver_getVoices(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, GNOME_Speech_VoiceInfoList * (*_impl_getVoices) (PortableServer_Servant _servant, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver_getAllVoices(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, GNOME_Speech_VoiceInfoList * (*_impl_getAllVoices) (PortableServer_Servant _servant, CORBA_Environment * ev));
   void _ORBIT_skel_small_GNOME_Speech_SynthesisDriver_createSpeaker(POA_GNOME_Speech_SynthesisDriver * _ORBIT_servant, gpointer _ORBIT_retval, gpointer * _ORBIT_args, CORBA_Context ctx, CORBA_Environment * ev, GNOME_Speech_Speaker(*_impl_createSpeaker) (PortableServer_Servant _servant, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev));
   /** stub prototypes **/
#define GNOME_Speech_SpeechCallback_ref Bonobo_Unknown_ref
#define GNOME_Speech_SpeechCallback_unref Bonobo_Unknown_unref
#define GNOME_Speech_SpeechCallback_queryInterface Bonobo_Unknown_queryInterface
   void GNOME_Speech_SpeechCallback_notify(GNOME_Speech_SpeechCallback _obj, const GNOME_Speech_speech_callback_type type, const CORBA_long text_id, const CORBA_long offset, CORBA_Environment * ev);
#define GNOME_Speech_Speaker_ref Bonobo_Unknown_ref
#define GNOME_Speech_Speaker_unref Bonobo_Unknown_unref
#define GNOME_Speech_Speaker_queryInterface Bonobo_Unknown_queryInterface
   GNOME_Speech_ParameterList *GNOME_Speech_Speaker_getSupportedParameters(GNOME_Speech_Speaker _obj, CORBA_Environment * ev);
   CORBA_string GNOME_Speech_Speaker_getParameterValueDescription(GNOME_Speech_Speaker _obj, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev);
   CORBA_double GNOME_Speech_Speaker_getParameterValue(GNOME_Speech_Speaker _obj, const CORBA_char * name, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_Speaker_setParameterValue(GNOME_Speech_Speaker _obj, const CORBA_char * name, const CORBA_double value, CORBA_Environment * ev);
   CORBA_long GNOME_Speech_Speaker_say(GNOME_Speech_Speaker _obj, const CORBA_char * text, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_Speaker_stop(GNOME_Speech_Speaker _obj, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_Speaker_isSpeaking(GNOME_Speech_Speaker _obj, CORBA_Environment * ev);
   void GNOME_Speech_Speaker_wait(GNOME_Speech_Speaker _obj, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_Speaker_registerSpeechCallback(GNOME_Speech_Speaker _obj, const GNOME_Speech_SpeechCallback callback, CORBA_Environment * ev);
#define GNOME_Speech_SynthesisDriver_ref Bonobo_Unknown_ref
#define GNOME_Speech_SynthesisDriver_unref Bonobo_Unknown_unref
#define GNOME_Speech_SynthesisDriver_queryInterface Bonobo_Unknown_queryInterface
   CORBA_string GNOME_Speech_SynthesisDriver__get_driverName(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   CORBA_string GNOME_Speech_SynthesisDriver__get_synthesizerName(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   CORBA_string GNOME_Speech_SynthesisDriver__get_driverVersion(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   CORBA_string GNOME_Speech_SynthesisDriver__get_synthesizerVersion(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_SynthesisDriver_driverInit(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   CORBA_boolean GNOME_Speech_SynthesisDriver_isInitialized(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   GNOME_Speech_VoiceInfoList *GNOME_Speech_SynthesisDriver_getVoices(GNOME_Speech_SynthesisDriver _obj, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev);
   GNOME_Speech_VoiceInfoList *GNOME_Speech_SynthesisDriver_getAllVoices(GNOME_Speech_SynthesisDriver _obj, CORBA_Environment * ev);
   GNOME_Speech_Speaker GNOME_Speech_SynthesisDriver_createSpeaker(GNOME_Speech_SynthesisDriver _obj, const GNOME_Speech_VoiceInfo * voice_spec, CORBA_Environment * ev);
#include <orbit/orb-core/orbit-interface.h>
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IInterface GNOME_Speech_SpeechCallback__iinterface;
#define GNOME_Speech_SpeechCallback_IMETHODS_LEN 1
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IMethod GNOME_Speech_SpeechCallback__imethods[GNOME_Speech_SpeechCallback_IMETHODS_LEN];
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IInterface GNOME_Speech_Speaker__iinterface;
#define GNOME_Speech_Speaker_IMETHODS_LEN 9
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IMethod GNOME_Speech_Speaker__imethods[GNOME_Speech_Speaker_IMETHODS_LEN];
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IInterface GNOME_Speech_SynthesisDriver__iinterface;
#define GNOME_Speech_SynthesisDriver_IMETHODS_LEN 9
#ifdef ORBIT_IDL_C_IMODULE_GNOME_Speech
   static
#else
   extern
#endif
   ORBit_IMethod GNOME_Speech_SynthesisDriver__imethods[GNOME_Speech_SynthesisDriver_IMETHODS_LEN];
#ifdef __cplusplus
}
#endif				/* __cplusplus */
#ifndef EXCLUDE_ORBIT_H
#include <orbit/orbit.h>
#endif				/* EXCLUDE_ORBIT_H */
#endif
#undef ORBIT_IDL_SERIAL