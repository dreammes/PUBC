//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADSlot, NSHashTable, NSOperationQueue;

@interface GADIntermission : NSObject
{
    _Bool _publisherIdleTimerDisabled;	// 8 = 0x8
    GADSlot *_slot;	// 16 = 0x10
    _Bool _statusBarWasOriginallyHidden;	// 24 = 0x18
    long long _activeParticipantsCount;	// 32 = 0x20
    long long _deactivatingParticipantsCount;	// 40 = 0x28
    NSHashTable *_activeParticipants;	// 48 = 0x30
    NSHashTable *_deactivatingParticipants;	// 56 = 0x38
    NSOperationQueue *_deactivationQueue;	// 64 = 0x40
    _Bool _statusBarOverridden;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100a23cb4
- (void)applicationWillEnterForegroundWithNotification:(id)arg1;	// IMP=0x0000000100a23870
- (void)participantDidRelinquishScreen:(id)arg1;	// IMP=0x0000000100a2375c
- (void)participantWillRelinquishScreen:(id)arg1;	// IMP=0x0000000100a2366c
- (void)participantWillOverrideStatusBarVisibility:(id)arg1;	// IMP=0x0000000100a23628
- (void)addParticipant:(id)arg1;	// IMP=0x0000000100a2356c
- (void)didEnd;	// IMP=0x0000000100a23464
- (void)willEnd;	// IMP=0x0000000100a233b4
- (void)begin;	// IMP=0x0000000100a2322c
- (void)cleanUpDeallocatedParticipants;	// IMP=0x0000000100a22e38
- (id)activeParticipants;	// IMP=0x0000000100a22e28
- (void)dealloc;	// IMP=0x0000000100a22d98
- (id)initWithSlot:(id)arg1;	// IMP=0x0000000100a22c40
- (id)init;	// IMP=0x0000000100a22c28

@end

