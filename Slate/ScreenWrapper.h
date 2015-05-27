//
//  ScreenWrapper.h
//  Slate
//
//  Created by Jigish Patel on 6/17/11.
//  Copyright 2011 Jigish Patel. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see http://www.gnu.org/licenses

#import <Foundation/Foundation.h>


@interface ScreenWrapper : NSObject {
  NSArray *screens;
}

@property  NSArray *screens;

+ (void)updateLeftToRightToDefault;
+ (void)updateLeftToRightToDefault:(NSArray *)theScreens;
+ (void)updateScreenResolutions;
+ (void)updateScreenResolutions:(NSArray *)theScreens;
+ (void)updateStatics;
+ (BOOL)hasScreenConfigChanged;
- (id)initWithScreens:(NSArray *)theScreens; // Used for testing
- (NSInteger)getScreenCount;
- (NSRect)getScreenVisibleRect:(NSInteger)screenId;
- (NSRect)getScreenVisibleRectForRef:(NSInteger)screenRefId;
- (NSRect)getScreenRect:(NSInteger)screenId;
- (NSRect)getScreenRectForRef:(NSInteger)screenRefId;
- (NSInteger)convertDefaultOrderToLeftToRightOrder:(NSInteger)screenId;
- (NSInteger)convertDefaultOrderToLeftToRightOrderIfNeeded:(NSInteger)screenId;
- (void)getScreenResolutionStrings:(NSMutableArray *)strings;
- (NSInteger)getScreenDisplayId:(NSInteger)screenId;
- (NSInteger)getScreenDisplayIdForRef:(NSInteger)screenRefId;
- (NSInteger)getScreenRefId:(NSString *)screenRef windowRect:(NSRect)window;
- (NSInteger)getScreenId:(NSString *)screenRef windowRect:(NSRect)window;
- (NSInteger)getScreenRefIdForRect:(NSRect)rect;
- (NSInteger)getScreenIdForRect:(NSRect)rect;
- (NSInteger)getScreenRefIdForPoint:(NSPoint)point;
- (NSInteger)getScreenIdForPoint:(NSPoint)point;
- (BOOL)isMainScreen:(NSInteger)screenID;
- (BOOL)isMainScreenRef:(NSInteger)screenID;
- (BOOL)isRectOffScreen:(NSRect)rect;
- (BOOL)screenExists:(NSInteger)screenId;
- (NSDictionary *)getScreenAndWindowValues:(NSInteger)screenId window:(NSRect)cWindowRect newSize:(NSSize)nSize;
- (NSRect)convertScreenRectToWindowCoords:(NSInteger)screenId;
+ (NSRect)convertScreenRectToWindowCoords:(NSScreen *)screen withReference:(NSScreen *)refScreen;
- (NSRect)convertScreenVisibleRectToWindowCoords:(NSInteger)screenId;
- (NSPoint)convertTopLeftToScreenRelative:(NSPoint)topLeft screen:(NSInteger)screenId;

@end
