//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKShareOpenGraphValueContainer.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDKShareOpenGraphObject : FBSDKShareOpenGraphValueContainer <FBSDKCopying, NSSecureCoding>
{
}

+ (id)objectWithProperties:(id)arg1;	// IMP=0x000000010071ff68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100720078
- (_Bool)isEqualToShareOpenGraphObject:(id)arg1;	// IMP=0x000000010072006c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010071ffdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

