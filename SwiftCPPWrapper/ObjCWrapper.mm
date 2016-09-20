//
//  ObjCWrapper.mm
//  LotteryMoot
//
//  Created by Derek Langton on 9/3/16.
//  Copyright © 2016 Moot Dog Dev. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ObjCWrapper.h"
#import "CppWrapped.h"
@implementation ObjCWrapper
// objective C model must have .mm extension to call c++ functions
+ (void) foo: (NSInteger) n
{
    CPPWrapped::foo( (int)n );

}
+ (int) getMTLinfo: (NSString*) n
{
    return CPPWrapped::getMTLinfo([n cStringUsingEncoding:NSUTF8StringEncoding]);

    
}
@end
