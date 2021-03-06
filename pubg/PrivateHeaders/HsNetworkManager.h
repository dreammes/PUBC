//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsNetworkDispatcher, NSMutableDictionary;

@interface HsNetworkManager : NSObject
{
    HsNetworkDispatcher *_networkDispatcher;	// 8 = 0x8
    NSMutableDictionary *_bgDelegates;	// 16 = 0x10
    NSMutableDictionary *_backgroundResponses;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *backgroundResponses; // @synthesize backgroundResponses=_backgroundResponses;
@property(retain, nonatomic) NSMutableDictionary *bgDelegates; // @synthesize bgDelegates=_bgDelegates;
@property(retain, nonatomic) HsNetworkDispatcher *networkDispatcher; // @synthesize networkDispatcher=_networkDispatcher;
- (void).cxx_destruct;	// IMP=0x00000001013cf9c4
- (void)fireDelegatesForBackgroundData;	// IMP=0x00000001013cf700
- (void)setDelegate:(id)arg1 forUrl:(id)arg2 andMethod:(short)arg3;	// IMP=0x00000001013cf47c
- (id)addRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001013cf3e0
- (id)initWithNetworkDispatcher:(id)arg1 andResponseStorage:(id)arg2;	// IMP=0x00000001013cf0c4

@end

