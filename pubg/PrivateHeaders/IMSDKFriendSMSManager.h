//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKFriendDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"

@class NSString;

@interface IMSDKFriendSMSManager : NSObject <MFMessageComposeViewControllerDelegate, IMSDKFriendDelegate>
{
    CDUnknownBlockType _callback;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100930fc4
+ (id)sharedInstance;	// IMP=0x0000000100930d58
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;	// IMP=0x0000000100931e20
- (void)handleOpenURL:(id)arg1;	// IMP=0x0000000100931b9c
- (id)fetchSourceNameFromUrl:(id)arg1;	// IMP=0x00000001009317e8
- (void)share:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x000000010093177c
- (void)sendMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100931480
- (void)inviteWithContent:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100931414
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x00000001009313a4
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0000000100931028
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100931014
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100930fec
- (id)initSingleton;	// IMP=0x0000000100930e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

