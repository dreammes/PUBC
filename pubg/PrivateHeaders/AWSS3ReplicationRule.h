//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Destination, NSString;

@interface AWSS3ReplicationRule : AWSModel
{
    AWSS3Destination *_destination;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_prefix;	// 24 = 0x18
    long long _status;	// 32 = 0x20
}

+ (id)statusJSONTransformer;	// IMP=0x0000000100c1162c
+ (id)destinationJSONTransformer;	// IMP=0x0000000100c115e8
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c11524
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3Destination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;	// IMP=0x0000000100c117fc

@end

