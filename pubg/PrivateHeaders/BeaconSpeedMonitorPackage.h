//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaNSObjTransToJceBufferProtocol.h"

@class NSArray, NSString;

@interface BeaconSpeedMonitorPackage : NSObject <AnaNSObjTransToJceBufferProtocol>
{
    NSArray *ipList;	// 8 = 0x8
    NSArray *domainList;	// 16 = 0x10
    NSArray *hostList;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *hostList; // @synthesize hostList;
@property(retain, nonatomic) NSArray *domainList; // @synthesize domainList;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList;
- (void).cxx_destruct;	// IMP=0x00000001007eb448
- (void)dealloc;	// IMP=0x00000001007eb2f0
- (id)createWUPModel;	// IMP=0x00000001007eaf94
- (id)setDataToBuffer;	// IMP=0x00000001007eaf88
- (void)addPkgElements:(id)arg1;	// IMP=0x00000001007eac3c
- (id)getPkgElements;	// IMP=0x00000001007eaba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

