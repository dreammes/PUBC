//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HsAnalyticsEventDTO : NSObject
{
    NSString *_ID;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSDictionary *_data;	// 24 = 0x18
    NSString *_timestamp;	// 32 = 0x20
}

@property(readonly) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSDictionary *data; // @synthesize data=_data;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;	// IMP=0x0000000101342674
- (id)initWithEventId:(id)arg1 type:(unsigned long long)arg2 data:(id)arg3 timestamp:(id)arg4;	// IMP=0x000000010134253c

@end

