/*
   GNUstep ProjectCenter - http://www.gnustep.org/experience/ProjectCenter.html

   Copyright (C) 2002-2004 Free Software Foundation

   Authors: Philippe C.D. Robert
            Serg Stoyan

   This file is part of GNUstep.

   This application is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This application is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _PCMakefileFactory_h_
#define _PCMakefileFactory_h_

#import <Foundation/Foundation.h>

@class PCProject;

@interface PCMakefileFactory : NSObject
{
  NSMutableString *mfile;
  NSString        *pnme;
}

+ (PCMakefileFactory *)sharedFactory;

- (void)createMakefileForProject:(PCProject *)project;
- (BOOL)createPreambleForProject:(PCProject *)project;
- (BOOL)createPostambleForProject:(PCProject *)project;

- (void)appendString:(NSString *)aString;

- (void)appendLibraries:(NSArray *)array;
- (void)appendHeaders:(NSArray *)array;
- (void)appendHeaders:(NSArray *)array forTarget:(NSString *)target;
- (void)appendClasses:(NSArray *)array;
- (void)appendClasses:(NSArray *)array forTarget:(NSString *)target;
- (void)appendOtherSources:(NSArray *)array;
- (void)appendOtherSources:(NSArray *)array forTarget:(NSString *)target;
- (void)appendResources:(NSArray *)array inDir:(NSString *)dir;
- (void)appendLocalizedResources:(NSArray *)resources 
		    forLanguages:(NSArray *)languages;
- (void)appendSubprojects:(NSArray*)array;

- (NSData *)encodedMakefile;

@end

#endif

