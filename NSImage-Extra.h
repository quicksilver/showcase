//
//  NSImage-Extra.h
//  SmallGame
//
//  Created by Julius Eckert on 21.12.07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

CGImageRef CreateCGImageFromData(NSData* data);

@interface NSImage (Extra)

- (NSSize)proportionalSizeForTargetSize:(NSSize)aSize;

- (NSImage*)imageByScalingProportionallyToSize:(NSSize)aSize;

- (NSImage*)imageByScalingProportionallyToSize:(NSSize)targetSize
                                       flipped:(BOOL)isFlipped;

- (NSImage*)imageByScalingProportionallyToSize:(NSSize)targetSize
                                       flipped:(BOOL)isFlipped
                                      addFrame:(BOOL)shouldAddFrame
                                     addShadow:(BOOL)shouldAddShadow;

- (NSImage*)imageByScalingProportionallyToSize:(NSSize)targetSize
                                       flipped:(BOOL)isFlipped
                                      addFrame:(BOOL)shouldAddFrame
                                     addShadow:(BOOL)shouldAddShadow
                                      addSheen:(BOOL)shouldAddSheen;

@end
