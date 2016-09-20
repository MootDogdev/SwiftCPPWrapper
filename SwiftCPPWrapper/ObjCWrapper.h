//
//  ObjCWrapper.h
//  LotteryMoot
//
//  Created by Derek Langton on 9/3/16.
//  Copyright © 2016 Moot Dog Dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjCWrapper : NSObject

// objective C header wrapper for c++ functions
//
+ (void) foo: (NSInteger) n;
+ (int) getMTLinfo: (NSString*) fp;
@end
