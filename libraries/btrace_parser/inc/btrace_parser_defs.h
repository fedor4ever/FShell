// btrace_parser_defs.h
// 
// Copyright (c) 2008 - 2010 Accenture. All rights reserved.
// This component and the accompanying materials are made available
// under the terms of the "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
// 
// Initial Contributors:
// Accenture - Initial contribution
//

#ifndef __BTRACE_PARSER_DEFS_H__
#define __BTRACE_PARSER_DEFS_H__

#include <e32cmn.h>
#include <fshell/extrabtrace.h>

// BTrace category
const TUint KAmTraceCategory = BTrace::ESymbianExtentionsFirst;

// BTrace subcategories
enum TAmTraceSubCategory
	{
	// Subcategories for trace generated by autometric components
	EAmTraceSubCategoryEvCapture				= 0,
	EAmTraceSubCategoryScreenDriver				= 1,
	EAmTraceSubCategoryScreenText				= 2,
	EAmTraceSubCategoryWindowGroupName			= 3,
	EAmTraceSubCategoryReaderSync				= 4,
	EAmTraceSubCategoryWindowGroupFocus			= 5,
	EAmTraceSubCategoryViewActivated			= 6,
	EAmTraceSubCategoryThreadKilled				= 7,
	EAmTraceSubCategoryThreadTerminated			= 8,
	EAmTraceSubCategoryThreadPanicked			= 9,
	EAmTraceSubCategoryProcessKilled			= 10,
	EAmTraceSubCategoryProcessTerminated		= 11,
	EAmTraceSubCategoryProcessPanicked			= 12,
	EAmTraceSubCategoryScreenshot               = 13,
	EAmTraceSubCategoryFreeRAM                  = 14,

	// Btrace frames with subcategory number higher than this are parsed by CBtraceDomainEvent.
	EAmTraceSubCategoryDomainEventBase          = 64,
	
	// Subcategories for trace generated by other subsystems.
	EAmTraceSubCategoryMultimediaAudio			= 65,
	EAmTraceSubCategoryMultimediaVideo			= 66,
	EAmTraceSubCategoryCompatibilityPlaceHolder = 67, // Was previously EAmTraceSubCategoryScreenshot.
	};


/**
 * Enumeration specifying the event types which can be provided in frames with
 * the EAmTraceSubCategoryEvCapture subcategory.
 */
enum TAmTraceEventEvCapture
	{
	EAmTraceEventEvCaptureKeyPress				= 2,
	EAmTraceEventEvCapturePointer				= 3,
	EAmTraceEventEvCaptureUnclassified			= 4,
	EAmTraceEventEvCaptureAppResponse		    = 5,
	EAmTraceEventEvCaptureRawScan				= 6,
	EAmTraceEventEvCaptureAppStart              = 7,
	};


/**
 * Enumeration specifying the event types which can be provided in frames with
 * the EAmTraceSubCategoryMultimediaVideo subcategory.
 * 
 * Note: in future, these should move into a separate, video-specific header.
 */
enum TAmTraceEventMultimediaVideo
	{
	EAmTraceEventMultimediaVideoStart			= 1,
	EAmTraceEventMultimediaVideoFrame			= 2,
	EAmTraceEventMultimediaVideoStop			= 3,
	EAmTraceEventMultimediaVideoUnderflowError	= 4,
	EAmTraceEventMultimediaVideoOverflowError	= 5,
	
	// Error other than underflow or overflow
	EAmTraceEventMultimediaVideoError			= 6
	};

enum TAmTraceEventMultimediaAudio
	{
	EAmTraceEventMultimediaAudioStart			= 1,
	EAmTraceEventMultimediaAudioFrame			= 2,
	EAmTraceEventMultimediaAudioStop			= 3,
	EAmTraceEventMultimediaAudioUnderflowError	= 4,
	EAmTraceEventMultimediaAudioOverflowError	= 5,
	
	// Error other than underflow or overflow
	EAmTraceEventMultimediaAudioError			= 6
	};

/**
 * Enumeration specifying the event types which can be provided in frames with
 * the EAmTraceSubCategoryScreenDriver subcategory.
 */
enum TAmTraceEventScreenDriver
	{
	EAmTraceEventScreenDriverRectangleUpdated
	};

#endif // __BTRACE_PARSER_DEFS_H__
