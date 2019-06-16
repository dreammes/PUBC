//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol.h"

@class NSArray, NSDictionary, NSString;

@interface WXOMTACustomEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    float _duration;	// 64 = 0x40
    NSString *_eventID;	// 72 = 0x48
    NSArray *_args;	// 80 = 0x50
    NSDictionary *_kvs;	// 88 = 0x58
}

@property float duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDictionary *kvs; // @synthesize kvs=_kvs;
@property(copy, nonatomic) NSArray *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;	// IMP=0x0000000101528164
- (id)init;	// IMP=0x0000000101528050
- (void)encode:(id)arg1;	// IMP=0x0000000101527ea4
- (int)getType;	// IMP=0x0000000101527e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
