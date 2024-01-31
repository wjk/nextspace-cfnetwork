/*
 * Copyright (c) 2005 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
     File:       CFNetwork/CFNetworkDefs.h
 
     Contains:   CoreFoundation Network header
 
     Copyright:  � 2001-2005 by Apple Computer, Inc., all rights reserved
 
     Warning:    *** APPLE INTERNAL USE ONLY ***
                 This file may contain unreleased API's
 
     BuildInfo:  Built by:            anonymous
                 On:                  Wed Apr 27 10:45:36 2005
                 With Interfacer:     3.0d46   (Mac OS X for PowerPC)
                 From:                CFNetworkDefs.i
                     Revision:        1.5
                     Dated:           2004/06/01 17:53:05
                     Last change by:  rew
                     Last comment:    Updating all copyrights to include 2004
 
     Bugs:       Report bugs to Radar component "System Interfaces", "Latest"
                 List the version information (from above) in the Problem Description.
 
*/


#define CFNetwork_EXPORT extern

#define CALLBACK_API(_type, _name)              _type ( * _name)
#define CALLBACK_API_C(_type, _name)            _type ( * _name)
#define CALLBACK_API_STDCALL(_type, _name)      _type ( * _name)
#define CALLBACK_API_C_STDCALL(_type, _name)    _type ( * _name)
