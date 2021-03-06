//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKFriendDelegate.h"

@class NSString;

@interface IMSDKFriendQQManager : NSObject <IMSDKFriendDelegate>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b16050
+ (id)sharedInstance;	// IMP=0x0000000100b15e7c
- (void)handleOpenURL:(id)arg1;	// IMP=0x0000000100b179d4
- (id)fetchSourceNameFromUrl:(id)arg1;	// IMP=0x0000000100b17620
- (void)share:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b16d28
- (void)sendMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b16470
- (void)inviteWithContent:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b16404
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b16394
- (void)handleReulst:(int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b160b4
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b160a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b16078
- (id)initSingleton;	// IMP=0x0000000100b15f58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

